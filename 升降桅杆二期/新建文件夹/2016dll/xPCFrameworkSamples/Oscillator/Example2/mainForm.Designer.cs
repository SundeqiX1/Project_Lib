namespace xpcOscillator
{
    partial class mainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Series series2 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.loadButton = new System.Windows.Forms.Button();
            this.dampingTrackBar = new System.Windows.Forms.TrackBar();
            this.cmdTextBox = new System.Windows.Forms.TextBox();
            this.displayTimer = new System.Windows.Forms.Timer(this.components);
            this.resTextBox = new System.Windows.Forms.TextBox();
            this.stopButton = new System.Windows.Forms.Button();
            this.startButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.unloadButton = new System.Windows.Forms.Button();
            this.disconnectButton = new System.Windows.Forms.Button();
            this.connectButton = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.dampingTextBox = new System.Windows.Forms.TextBox();
            this.tg = new MathWorks.xPCTarget.FrameWork.xPCTargetPC(this.components);
            this.signalChart = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.label8 = new System.Windows.Forms.Label();
            this.targetPortTextBox = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.targetAddressTextBox = new System.Windows.Forms.TextBox();
            this.loadDLMButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dampingTrackBar)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.signalChart)).BeginInit();
            this.SuspendLayout();
            // 
            // loadButton
            // 
            this.loadButton.Enabled = false;
            this.loadButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loadButton.Location = new System.Drawing.Point(298, 148);
            this.loadButton.Name = "loadButton";
            this.loadButton.Size = new System.Drawing.Size(100, 50);
            this.loadButton.TabIndex = 5;
            this.loadButton.Text = "Load";
            this.loadButton.UseVisualStyleBackColor = true;
            this.loadButton.Click += new System.EventHandler(this.loadButton_Click);
            // 
            // dampingTrackBar
            // 
            this.dampingTrackBar.Location = new System.Drawing.Point(352, 567);
            this.dampingTrackBar.Name = "dampingTrackBar";
            this.dampingTrackBar.Size = new System.Drawing.Size(241, 45);
            this.dampingTrackBar.TabIndex = 12;
            this.dampingTrackBar.Value = 2;
            this.dampingTrackBar.Scroll += new System.EventHandler(this.dampingTrackBar_Scroll);
            // 
            // cmdTextBox
            // 
            this.cmdTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.cmdTextBox.Location = new System.Drawing.Point(161, 557);
            this.cmdTextBox.Name = "cmdTextBox";
            this.cmdTextBox.Size = new System.Drawing.Size(79, 26);
            this.cmdTextBox.TabIndex = 10;
            this.cmdTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // displayTimer
            // 
            this.displayTimer.Tick += new System.EventHandler(this.displayTimer_Tick);
            // 
            // resTextBox
            // 
            this.resTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.resTextBox.Location = new System.Drawing.Point(161, 589);
            this.resTextBox.Name = "resTextBox";
            this.resTextBox.Size = new System.Drawing.Size(79, 26);
            this.resTextBox.TabIndex = 11;
            this.resTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // stopButton
            // 
            this.stopButton.Enabled = false;
            this.stopButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.stopButton.Location = new System.Drawing.Point(500, 206);
            this.stopButton.Name = "stopButton";
            this.stopButton.Size = new System.Drawing.Size(100, 50);
            this.stopButton.TabIndex = 9;
            this.stopButton.Text = "Stop";
            this.stopButton.UseVisualStyleBackColor = true;
            this.stopButton.Click += new System.EventHandler(this.stopButton_Click);
            // 
            // startButton
            // 
            this.startButton.Enabled = false;
            this.startButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.startButton.Location = new System.Drawing.Point(500, 148);
            this.startButton.Name = "startButton";
            this.startButton.Size = new System.Drawing.Size(100, 50);
            this.startButton.TabIndex = 6;
            this.startButton.Text = "Start";
            this.startButton.UseVisualStyleBackColor = true;
            this.startButton.Click += new System.EventHandler(this.startButton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(81, 562);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(71, 17);
            this.label1.TabIndex = 6;
            this.label1.Text = "Command";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(80, 594);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(72, 17);
            this.label2.TabIndex = 7;
            this.label2.Text = "Response";
            // 
            // unloadButton
            // 
            this.unloadButton.Enabled = false;
            this.unloadButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.unloadButton.Location = new System.Drawing.Point(298, 206);
            this.unloadButton.Name = "unloadButton";
            this.unloadButton.Size = new System.Drawing.Size(100, 50);
            this.unloadButton.TabIndex = 8;
            this.unloadButton.Text = "Unload";
            this.unloadButton.UseVisualStyleBackColor = true;
            this.unloadButton.Click += new System.EventHandler(this.unloadButton_Click);
            // 
            // disconnectButton
            // 
            this.disconnectButton.Enabled = false;
            this.disconnectButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.disconnectButton.Location = new System.Drawing.Point(90, 206);
            this.disconnectButton.Name = "disconnectButton";
            this.disconnectButton.Size = new System.Drawing.Size(100, 50);
            this.disconnectButton.TabIndex = 7;
            this.disconnectButton.Text = "Disconnect";
            this.disconnectButton.UseVisualStyleBackColor = true;
            this.disconnectButton.Click += new System.EventHandler(this.disconnectButton_Click);
            // 
            // connectButton
            // 
            this.connectButton.Enabled = false;
            this.connectButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.connectButton.Location = new System.Drawing.Point(90, 148);
            this.connectButton.Name = "connectButton";
            this.connectButton.Size = new System.Drawing.Size(100, 50);
            this.connectButton.TabIndex = 4;
            this.connectButton.Text = "Connect";
            this.connectButton.UseVisualStyleBackColor = true;
            this.connectButton.Click += new System.EventHandler(this.connectButton_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(279, 9);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(137, 40);
            this.label3.TabIndex = 11;
            this.label3.Text = "Oscillator Model\r\n(xpcosc.dlm)";
            this.label3.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(407, 543);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(134, 17);
            this.label4.TabIndex = 12;
            this.label4.Text = "Damping Coefficient";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(358, 601);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(16, 17);
            this.label5.TabIndex = 13;
            this.label5.Text = "0";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(573, 601);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(16, 17);
            this.label6.TabIndex = 14;
            this.label6.Text = "1";
            // 
            // dampingTextBox
            // 
            this.dampingTextBox.Enabled = false;
            this.dampingTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dampingTextBox.Location = new System.Drawing.Point(434, 613);
            this.dampingTextBox.Name = "dampingTextBox";
            this.dampingTextBox.Size = new System.Drawing.Size(79, 26);
            this.dampingTextBox.TabIndex = 0;
            this.dampingTextBox.TabStop = false;
            this.dampingTextBox.Text = "0.2";
            this.dampingTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // tg
            // 
            this.tg.ContainerControl = this;
            this.tg.DLMFileName = "C:\\sandbox\\djones\\projects\\dotNetProjects\\R2011a\\work\\xpcosc.dlm";
            this.tg.HostTargetComm = MathWorks.xPCTarget.FrameWork.XPCProtocol.TCPIP;
            this.tg.RS232Baudrate = MathWorks.xPCTarget.FrameWork.XPCRS232BaudRate.BAUD115200;
            this.tg.RS232HostPort = MathWorks.xPCTarget.FrameWork.XPCRS232CommPort.COM1;
            this.tg.TargetPCName = "TargetPC1";
            this.tg.TcpIpTargetAddress = "10.10.10.15";
            this.tg.TcpIpTargetPort = "22222";
            // 
            // signalChart
            // 
            this.signalChart.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.signalChart.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(243)))), ((int)(((byte)(223)))), ((int)(((byte)(193)))));
            this.signalChart.BackSecondaryColor = System.Drawing.Color.White;
            this.signalChart.BorderlineColor = System.Drawing.Color.Black;
            this.signalChart.BorderlineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Solid;
            this.signalChart.BorderlineWidth = 2;
            this.signalChart.BorderSkin.PageColor = System.Drawing.Color.Transparent;
            this.signalChart.BorderSkin.SkinStyle = System.Windows.Forms.DataVisualization.Charting.BorderSkinStyle.Emboss;
            chartArea1.AlignmentOrientation = ((System.Windows.Forms.DataVisualization.Charting.AreaAlignmentOrientations)((System.Windows.Forms.DataVisualization.Charting.AreaAlignmentOrientations.Vertical | System.Windows.Forms.DataVisualization.Charting.AreaAlignmentOrientations.Horizontal)));
            chartArea1.Area3DStyle.Inclination = 40;
            chartArea1.Area3DStyle.IsRightAngleAxes = false;
            chartArea1.Area3DStyle.LightStyle = System.Windows.Forms.DataVisualization.Charting.LightStyle.Realistic;
            chartArea1.Area3DStyle.Perspective = 9;
            chartArea1.Area3DStyle.Rotation = 25;
            chartArea1.Area3DStyle.WallWidth = 3;
            chartArea1.AxisX.IsLabelAutoFit = false;
            chartArea1.AxisX.LabelAutoFitMaxFontSize = 9;
            chartArea1.AxisX.LabelStyle.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            chartArea1.AxisX.LabelStyle.Format = "F1";
            chartArea1.AxisX.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.NotSet;
            chartArea1.AxisX.MajorGrid.LineColor = System.Drawing.Color.White;
            chartArea1.AxisX.Title = "Time (sec)";
            chartArea1.AxisX2.IsLabelAutoFit = false;
            chartArea1.AxisX2.LabelAutoFitMaxFontSize = 9;
            chartArea1.AxisY.LabelAutoFitMaxFontSize = 9;
            chartArea1.AxisY.LabelStyle.Format = "F0";
            chartArea1.AxisY.MajorGrid.LineColor = System.Drawing.Color.White;
            chartArea1.AxisY.Title = "Command/Response";
            chartArea1.AxisY2.IsLabelAutoFit = false;
            chartArea1.AxisY2.LabelAutoFitMaxFontSize = 9;
            chartArea1.BackColor = System.Drawing.Color.Black;
            chartArea1.BackSecondaryColor = System.Drawing.Color.Black;
            chartArea1.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            chartArea1.BorderDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Solid;
            chartArea1.CursorX.LineColor = System.Drawing.Color.White;
            chartArea1.CursorY.LineColor = System.Drawing.Color.White;
            chartArea1.InnerPlotPosition.Auto = false;
            chartArea1.InnerPlotPosition.Height = 80F;
            chartArea1.InnerPlotPosition.Width = 90F;
            chartArea1.InnerPlotPosition.X = 8F;
            chartArea1.InnerPlotPosition.Y = 3F;
            chartArea1.IsSameFontSizeForAllAxes = true;
            chartArea1.Name = "Default";
            chartArea1.ShadowColor = System.Drawing.Color.Transparent;
            this.signalChart.ChartAreas.Add(chartArea1);
            this.signalChart.Location = new System.Drawing.Point(10, 278);
            this.signalChart.Name = "signalChart";
            series1.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(180)))), ((int)(((byte)(26)))), ((int)(((byte)(59)))), ((int)(((byte)(105)))));
            series1.BorderWidth = 2;
            series1.ChartArea = "Default";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.FastLine;
            series1.Color = System.Drawing.Color.Yellow;
            series1.Name = "Series1";
            series1.ShadowColor = System.Drawing.Color.Black;
            series1.ShadowOffset = 2;
            series2.BorderColor = System.Drawing.Color.White;
            series2.BorderWidth = 2;
            series2.ChartArea = "Default";
            series2.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.FastLine;
            series2.Color = System.Drawing.Color.Cyan;
            series2.Name = "Series2";
            this.signalChart.Series.Add(series1);
            this.signalChart.Series.Add(series2);
            this.signalChart.Size = new System.Drawing.Size(675, 250);
            this.signalChart.TabIndex = 0;
            this.signalChart.TabStop = false;
            this.signalChart.Text = "signalChart";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label8.Location = new System.Drawing.Point(366, 86);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(124, 16);
            this.label8.TabIndex = 23;
            this.label8.Text = "Target TCP/IP Port:";
            // 
            // targetPortTextBox
            // 
            this.targetPortTextBox.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.targetPortTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.targetPortTextBox.Location = new System.Drawing.Point(517, 82);
            this.targetPortTextBox.Name = "targetPortTextBox";
            this.targetPortTextBox.Size = new System.Drawing.Size(131, 26);
            this.targetPortTextBox.TabIndex = 3;
            this.targetPortTextBox.Text = "22222";
            this.targetPortTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(36, 85);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(151, 16);
            this.label7.TabIndex = 21;
            this.label7.Text = "Target TCP/IP Address:";
            // 
            // targetAddressTextBox
            // 
            this.targetAddressTextBox.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.targetAddressTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.targetAddressTextBox.Location = new System.Drawing.Point(187, 81);
            this.targetAddressTextBox.Name = "targetAddressTextBox";
            this.targetAddressTextBox.Size = new System.Drawing.Size(131, 26);
            this.targetAddressTextBox.TabIndex = 2;
            this.targetAddressTextBox.Text = "10.10.10.15";
            this.targetAddressTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // loadDLMButton
            // 
            this.loadDLMButton.BackColor = System.Drawing.SystemColors.Control;
            this.loadDLMButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.loadDLMButton.Location = new System.Drawing.Point(517, 12);
            this.loadDLMButton.Name = "loadDLMButton";
            this.loadDLMButton.Size = new System.Drawing.Size(131, 37);
            this.loadDLMButton.TabIndex = 1;
            this.loadDLMButton.Text = "Find xpcosc.dlm...";
            this.loadDLMButton.UseVisualStyleBackColor = false;
            this.loadDLMButton.Click += new System.EventHandler(this.loadDLMButton_Click);
            // 
            // mainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(693, 653);
            this.Controls.Add(this.loadDLMButton);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.targetPortTextBox);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.targetAddressTextBox);
            this.Controls.Add(this.signalChart);
            this.Controls.Add(this.dampingTextBox);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.disconnectButton);
            this.Controls.Add(this.connectButton);
            this.Controls.Add(this.unloadButton);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.startButton);
            this.Controls.Add(this.stopButton);
            this.Controls.Add(this.resTextBox);
            this.Controls.Add(this.cmdTextBox);
            this.Controls.Add(this.dampingTrackBar);
            this.Controls.Add(this.loadButton);
            this.Name = "mainForm";
            this.Text = "Oscillator Control Interface";
            ((System.ComponentModel.ISupportInitialize)(this.dampingTrackBar)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.signalChart)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button loadButton;
        private System.Windows.Forms.TrackBar dampingTrackBar;
        private System.Windows.Forms.TextBox cmdTextBox;
        private System.Windows.Forms.Timer displayTimer;
        private System.Windows.Forms.TextBox resTextBox;
        private System.Windows.Forms.Button stopButton;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button startButton;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button disconnectButton;
        private System.Windows.Forms.Button connectButton;
        private System.Windows.Forms.Button unloadButton;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox dampingTextBox;
        private MathWorks.xPCTarget.FrameWork.xPCTargetPC tg;
        private System.Windows.Forms.DataVisualization.Charting.Chart signalChart;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox targetPortTextBox;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox targetAddressTextBox;
        private System.Windows.Forms.Button loadDLMButton;
    }
}

