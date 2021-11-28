using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using MathWorks.xPCTarget.FrameWork;

namespace xpcOscillator
{
    public partial class mainForm : Form
    {

        xPCHostScope refSc;
        String mdlName = "xpcosc";

        xPCSignal SigCmd;
        xPCSignal SigFbk;
        xPCParameter damping;

        public mainForm()
        {
            InitializeComponent();
        }

        private void dampingTrackBar_Scroll(object sender, EventArgs e)
        {
            try
            {
                // Get current track bar (slider) value.
                double   dValue;
                Double[] pValue = new Double[1];
                dValue = (double)dampingTrackBar.Value / 10;
                pValue[0] = 2 * 1000 * dValue;

                // Update the damping parameter.
                xPCParameters tgparams = tg.Application.Parameters;
                tgparams.Refresh();
                damping = tgparams["Gain1", "Gain"];
                damping.SetParam(pValue);
                dampingTextBox.Text = dValue.ToString("F1");
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }

        private void displayTimer_Tick(object sender, EventArgs e)
        {
            // Update display of signal values (command & feedback).
            cmdTextBox.Text = SigCmd.GetValue().ToString("F2");
            resTextBox.Text = SigFbk.GetValue().ToString("F2");
            ShowData();
        }

        private void loadButton_Click(object sender, EventArgs e)
        {
            try
            {

                // Load the application (.DLM file).
                tg.Load();

                // Initialize host scopes.
                SetAppHostScopes();
                
                // Add a Target Scope and display oscillator command & feedback.
                Double[] yValues = new Double[2];
                SigCmd = tg.Application.Signals["Signal Generator"];
                SigFbk  = tg.Application.Signals["Integrator1"];
                yValues[0] = -10.0;
                yValues[1] =  10.0;

                xPCTargetScope tgsc = tg.Application.Scopes.TargetScopes.Add();
                tgsc.Signals.Add(SigCmd);
                tgsc.Signals.Add(SigFbk);
                tgsc.YLimit = yValues;
                tgsc.NumSamples = 1000;
                tgsc.TriggerMode = SCTRIGGERMODE.SIGNAL;
                tgsc.TriggerSignal = tgsc.Signals["Signal Generator"];
                tgsc.TriggerSlope = SCTRIGGERSLOPE.RISING;
                tgsc.TriggerLevel = 0.0;

                connectButton.Enabled = false;
                loadButton.Enabled = true;
                startButton.Enabled = true;
                stopButton.Enabled = false;
                unloadButton.Enabled = true;
                disconnectButton.Enabled = true;
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }

        private void startButton_Click(object sender, EventArgs e)
        {
            try
            {
                if (tg.IsConnected == false)
                {
                    MessageBox.Show("Not connected!");
                }

                // Start the application.
                xPCApplication app = tg.Application;
                xPCScopes scopes = app.Scopes;
                scopes.RefreshAll();
                xPCHostScopeCollection hScopes = scopes.HostScopes;
                xPCTargetScopeCollection tScopes = scopes.TargetScopes;
                app.StopTime = -1; // Set stop time to infinity.
                tScopes.StartAll();
                hScopes.StartAll();
                app.Start();

                displayTimer.Enabled = true;

                connectButton.Enabled = false;
                loadButton.Enabled = false;
                startButton.Enabled = false;
                stopButton.Enabled = true;
                unloadButton.Enabled = false;
                disconnectButton.Enabled = false;
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }

        private void stopButton_Click(object sender, EventArgs e)
        {
            try
            {
                // Stop the application.
                tg.Application.Stop();

                displayTimer.Enabled = false;

                connectButton.Enabled = false;
                loadButton.Enabled = true;
                startButton.Enabled = true;
                stopButton.Enabled = false;
                unloadButton.Enabled = true;
                disconnectButton.Enabled = true;
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }

        private void connectButton_Click(object sender, EventArgs e)
        {
            try
            {
                // Before trying to connect, make sure we're disconnected first in case we are now connecting to a different target.
                if (tg.IsConnected == true)
                {
                    tg.Disconnect();
                    if (tg.IsConnected != false)
                        MessageBox.Show("Could not Disconnect!");
                }

                // Set the target TCP/IP address and port.
                tg.TcpIpTargetAddress = targetAddressTextBox.Text;
                tg.TcpIpTargetPort = "22222";

                // Now connect.
                tg.Connect();
                if (tg.IsConnected == true)
                {
                    MessageBox.Show("Connected!");

                    connectButton.Enabled = false;
                    loadButton.Enabled = true;
                    startButton.Enabled = false;
                    stopButton.Enabled = false;
                    unloadButton.Enabled = false;
                    disconnectButton.Enabled = true;
                }
                else
                    MessageBox.Show("Could not Connect!");
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }

        private void disconnectButton_Click(object sender, EventArgs e)
        {
            try
            {
                // Disconnect from the target.
                tg.Disconnect();
                if (tg.IsConnected == false)
                {
                    MessageBox.Show("Disconnected!");

                    connectButton.Enabled = true;
                    loadButton.Enabled = false;
                    startButton.Enabled = false;
                    stopButton.Enabled = false;
                    unloadButton.Enabled = false;
                    disconnectButton.Enabled = false;
                }
                else
                    MessageBox.Show("Could not Disconnect!");
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }

        private void unloadButton_Click(object sender, EventArgs e)
        {
            try
            {
                // Unload the target application.
                tg.Unload();

                connectButton.Enabled = false;
                loadButton.Enabled = true;
                startButton.Enabled = false;
                stopButton.Enabled = false;
                unloadButton.Enabled = false;
                disconnectButton.Enabled = true;
            }
            catch (xPCException me)
            {
                MessageBox.Show(me.Message);
            }
        }


        private void SetAppHostScopes()
        {
            try
            {
                // Initialize scopes.
                xPCApplication app = tg.Application;
                if (app.Name == this.mdlName)
                {
                    if (app.Status == xPCAppStatus.Running)
                    {
                        app.Stop();
                    }

                    // Refresh all scopes.
                    xPCScopes scopes = app.Scopes;
                    scopes.RefreshAll();

                    // Delete any existing host scopes.
                    xPCHostScopeCollection hScopes = scopes.HostScopes;
                    hScopes.Remove();

                    // Add a host scope to capture data for signal display.
                    this.refSc = hScopes.Add();
                    this.refSc.DataTimeObject.NumSamples = 1000;
                    refSc.NumSamples = 1000;
                    refSc.Signals.Add("Integrator1");
                    refSc.Signals.Add("Signal Generator");
                }
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void ShowData()
        {
            try
            {
                // Update charts with current signal data.
                xPCApplication app = tg.Application;
                if (app.Name == this.mdlName)
                {
                    if (app.Status == xPCAppStatus.Running)
                    {
                        // Refresh all scopes.
                        xPCScopes scopes = app.Scopes;
                        scopes.RefreshAll();

                        // Delete any existing host scopes.
                        xPCHostScopeCollection hScopes = scopes.HostScopes;

                        // Update signal chart display with latest host scope data.
                        xPCHostScope sc = hScopes[refSc.ScopeId];
                        if (sc.Status == SCSTATUS.FINISHED)
                        {
                            xPCDataHostScSignalObject scDataObj = sc.DataTimeObject;
                            Double[] Time = scDataObj.GetData();

                            Double[] data1 = sc.Signals["Integrator1"].HostScopeSignalDataObject.GetData();
                            Double[] data2 = sc.Signals["Signal Generator"].HostScopeSignalDataObject.GetData();

                            signalChart.Series[0].Points.Clear();
                            signalChart.Series[1].Points.Clear();

                            for (int pointIndex = 0; pointIndex < data1.Length; pointIndex++)
                            {
                                signalChart.Series[0].Points.AddXY(Time[pointIndex], data1[pointIndex]);
                                signalChart.Series[1].Points.AddXY(Time[pointIndex], data2[pointIndex]);
                            }

                            // Restart the host scope.
                            sc.Start();
                        }
                    }
                }
            }
            catch (xPCException ex)
            {
                MessageBox.Show(ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                displayTimer.Stop();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                displayTimer.Stop();
            }
        }

        private void loadDLMButton_Click(object sender, EventArgs e)
        {
            // Get the .dlm file to download.
            OpenFileDialog dialog = new OpenFileDialog();
            dialog.Filter = "DLM files (*.dlm)|*.dlm";
            //dialog.InitialDirectory = "C:\\";
            dialog.Title = "Select a DLM file";
            dialog.DefaultExt = "dlm";
            dialog.FileOk += new CancelEventHandler(dialog_FileOk);
            dialog.ShowDialog();
        }

        void dialog_FileOk(object sender, CancelEventArgs e)
        {
            // Set the .dlm file to download.
            FileDialog fDlg = (FileDialog)sender;
            tg.DLMFileName = fDlg.FileName;
            connectButton.Enabled = true;
        }
    }
}
