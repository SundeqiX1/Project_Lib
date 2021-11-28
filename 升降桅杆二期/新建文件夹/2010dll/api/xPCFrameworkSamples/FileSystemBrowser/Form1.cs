using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using MathWorks.xPCTarget.FrameWork;
using System.Runtime.InteropServices;
namespace Sample1
{
    public partial class Form1 : Form
    {
        [DllImport("kernel32.dll",EntryPoint="LoadLibraryA")]
        internal static extern int LoadLibrary(string dllfilename);
        
        

        private xPCTargetPC tgpc;
        public Form1()
        {
            InitializeComponent();
            //Create instance of the xPCTargetPC object
            tgpc = new xPCTargetPC();
        }

        private void toolStripButton1_Click(object sender, EventArgs e)
        {
            //Set the TCP/IP communication specifc properties required to connect to the target PC 
            tgpc.TcpIpTargetAddress = toolStripTextBox1.Text;
            tgpc.TcpIpTargetPort = toolStripTextBox2.Text;

            
            try
            {
                if (toolStripButton1.Text == "Connect")
                {
                    //Call the Connect method to connect this application to the target PC.
                    tgpc.Connect();
                    if (tgpc.IsConnected == true)
                    {
                        #region initialize UI controls when the application connects
                        toolStripButton1.Text = "Disconnect";
                        toolStripTextBox1.Enabled = false;
                        toolStripTextBox2.Enabled = false;
                        detailsToolStripMenuItem.Checked = false;
                        listToolStripMenuItem.Checked = true;
                        #endregion
                        //Populate the tree nodes that represent the drives available on the target pc file system
                        populatedrives();
                    }
                }
                else
                {
                    //Call the Disconnect methods to close the communication channel with the target PC.
                    tgpc.Disconnect();
                    #region reset ui controls state when the application disconnects
                    toolStripButton1.Text = "Connect";
                    toolStripDropDownButton1.Enabled = false;
                    toolStripTextBox1.Enabled = true;
                    toolStripTextBox2.Enabled = true;
                    treeView1.Nodes.Clear();
                    listView1.Items.Clear();
                    toolStripStatusLabel1.Text = "";
                    #endregion
                }
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listView1.View = View.Details;       
            //loading the xpcapi.dll at runtime from the xpc directory tree.
            int status = LoadLibrary(@"..\..\..\xpc\private\xpcapi.dll");
            //The line above can be omitted by copying the xpcapi.dll 
            //to the same folder the standalone executable is running from.
            
        }

        private void treeView1_BeforeExpand(object sender, TreeViewCancelEventArgs e)
        {
            //removes all children nodes
            depopulateFolders(e.Node);
            //Get the file name stored in the Tag property of the selected node.
            string dirname = e.Node.Tag.ToString();
            try
            {
                //Create an instance of the xPCDirectoryInfo object that represents the selected folder
                xPCDirectoryInfo dir = new xPCDirectoryInfo(tgpc, dirname);
                //Populate selected node with its children folder nodes
                populateFolders(e.Node, dir);
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message);
            }

        }
        

        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {
            Cursor state = Cursor.Current;    
            Cursor.Current = Cursors.WaitCursor;
            
            string dirname = e.Node.Tag.ToString();
            try
            {
                //Create the instance of the xPCDirectoryInfo object representing the selected folder
                xPCDirectoryInfo dir = new xPCDirectoryInfo(tgpc, dirname);
                //Populate the list view control with items representing the directories and files
                populateListView(dir);
                Cursor.Current = state;
                //Create instance of the xPCDriveInfo representing the volume of selected folder
                xPCDriveInfo drive = new xPCDriveInfo(tgpc, treeView1.SelectedNode.FullPath[0].ToString());
                long frsp = drive.AvailableFreeSpace / 1048576;
                
                toolStripStatusLabel1.Text = dir.GetFileSystemInfos().Length.ToString() +
                    " Objects" + " (Disk free Space: " + frsp.ToString() + "MB)";
                
                toolStripDropDownButton1.Enabled = true;
            }
            catch (xPCException ex)
            {
                Cursor.Current = state;
                MessageBox.Show(ex.Message);
            }
        }

        
        private void populatedrives()
        {
            xPCDriveInfo[] drives;
            try
            {
                drives = tgpc.FileSystem.GetDrives();
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message);
                return;
            }
            foreach (xPCDriveInfo dr in drives)
            {
                TreeNode node = treeView1.Nodes.Add("", dr.Name[0].ToString(), 2, 2);
                node.Tag = dr.Name;
                node.Nodes.Add("dummy");
            }
        }

        private void populateFolders(TreeNode node, xPCDirectoryInfo dir)
        {
            xPCDirectoryInfo[] dirs;
            try
            {
                dirs = dir.GetDirectories();
                foreach (xPCDirectoryInfo d in dirs)
                {
                    TreeNode nd = node.Nodes.Add("", d.Name, 0, 0);
                    nd.Tag = d.FullName;
                    xPCDirectoryInfo[] ch = d.GetDirectories();
                    if (ch.Length > 1)
                    {
                        nd.Nodes.Add("dummy");
                    }
                }
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message);
            }


        }

        private void depopulateFolders(TreeNode node)
        {
            while (node.FirstNode != null)
            {
                node.Nodes.Remove(node.FirstNode);
            }

        }

        private void populateListView(xPCDirectoryInfo dirFolder)
        {
            List<ListViewItem> listitems = new List<ListViewItem>();
            listView1.Items.Clear();
            try
            {
                xPCDirectoryInfo[] dirs = dirFolder.GetDirectories();
                foreach (xPCDirectoryInfo d in dirs)
                {
                    ListViewItem lvitem = new ListViewItem(d.Name, 0);//d.Name                    
                    if (detailsToolStripMenuItem.Checked == true)
                    {
                        lvitem.SubItems.Add("");
                        lvitem.SubItems.Add(d.CreationTime.ToShortDateString());
                    }
                    listitems.Add(lvitem);
                }


                xPCFileInfo[] files = dirFolder.GetFiles();
                foreach (xPCFileInfo file in files)
                {
                                       
                    ListViewItem lvitem = new ListViewItem(file.Name, 1);//file.Name    
                    if (detailsToolStripMenuItem.Checked == true)
                    {
                        long size = file.Length; 
                        lvitem.SubItems.Add(formatFileSize(size));
                        lvitem.SubItems.Add(file.CreationTime.ToShortDateString());
                    }
                    listitems.Add(lvitem);
                }
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message);
            }

            listView1.Items.AddRange(listitems.ToArray());

        }

        private string formatFileSize(long size)
        {
            double d;
            if (size < 1024)
                d = Math.Ceiling((double)size / 1024);
            else
                d = size / 1024;

            long fs = (long)d;
            return fs.ToString() + "KB";
        }

        private void toolStripDropDownButton1_DropDownItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {
            if (e.ClickedItem.Text == "List")
            {
                detailsToolStripMenuItem.Checked = false;
                listToolStripMenuItem.Checked = true;
                listView1.Columns.Clear();
                listView1.Columns.Add("Name", 225, HorizontalAlignment.Left);
            }
            else
            {
                detailsToolStripMenuItem.Checked = true;
                listToolStripMenuItem.Checked = false;
                listView1.Columns.Clear();
                listView1.Columns.Add("Name", 225, HorizontalAlignment.Left);
                listView1.Columns.Add("Size", 70, HorizontalAlignment.Right);
                listView1.Columns.Add("Created", 105, HorizontalAlignment.Left);

            }

            TreeViewEventArgs ev = new TreeViewEventArgs(treeView1.SelectedNode);
            treeView1_AfterSelect(sender, ev);
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            try
            {
                tgpc.Disconnect();
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            
        }




    }
}
