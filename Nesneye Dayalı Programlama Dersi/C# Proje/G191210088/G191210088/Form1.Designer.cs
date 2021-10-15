namespace G191210088
{
    partial class Form1
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
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.btnOrganik = new System.Windows.Forms.Button();
            this.btnOrganikBosalt = new System.Windows.Forms.Button();
            this.btnKagit = new System.Windows.Forms.Button();
            this.btnKagitBosalt = new System.Windows.Forms.Button();
            this.btnCam = new System.Windows.Forms.Button();
            this.btnCamBosalt = new System.Windows.Forms.Button();
            this.btnMetal = new System.Windows.Forms.Button();
            this.btnMetalBosalt = new System.Windows.Forms.Button();
            this.btnYeniOyun = new System.Windows.Forms.Button();
            this.btnCıkıs = new System.Windows.Forms.Button();
            this.listOrganik = new System.Windows.Forms.ListBox();
            this.listKagit = new System.Windows.Forms.ListBox();
            this.listCam = new System.Windows.Forms.ListBox();
            this.listMetal = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.lblSure = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.lblPuan = new System.Windows.Forms.Label();
            this.prgOrganik = new System.Windows.Forms.ProgressBar();
            this.prgMetal = new System.Windows.Forms.ProgressBar();
            this.prgCam = new System.Windows.Forms.ProgressBar();
            this.prgKagit = new System.Windows.Forms.ProgressBar();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.pictureBox1.Location = new System.Drawing.Point(32, 29);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(234, 193);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // btnOrganik
            // 
            this.btnOrganik.Enabled = false;
            this.btnOrganik.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnOrganik.Location = new System.Drawing.Point(344, 48);
            this.btnOrganik.Name = "btnOrganik";
            this.btnOrganik.Size = new System.Drawing.Size(136, 35);
            this.btnOrganik.TabIndex = 1;
            this.btnOrganik.Text = "Organik Atık";
            this.btnOrganik.UseVisualStyleBackColor = true;
            this.btnOrganik.Click += new System.EventHandler(this.btnOrganik_Click);
            // 
            // btnOrganikBosalt
            // 
            this.btnOrganikBosalt.Enabled = false;
            this.btnOrganikBosalt.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnOrganikBosalt.Location = new System.Drawing.Point(344, 306);
            this.btnOrganikBosalt.Name = "btnOrganikBosalt";
            this.btnOrganikBosalt.Size = new System.Drawing.Size(136, 35);
            this.btnOrganikBosalt.TabIndex = 2;
            this.btnOrganikBosalt.Text = "Boşalt";
            this.btnOrganikBosalt.UseVisualStyleBackColor = true;
            this.btnOrganikBosalt.Click += new System.EventHandler(this.btnOrganikBosalt_Click);
            // 
            // btnKagit
            // 
            this.btnKagit.Enabled = false;
            this.btnKagit.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnKagit.Location = new System.Drawing.Point(558, 48);
            this.btnKagit.Name = "btnKagit";
            this.btnKagit.Size = new System.Drawing.Size(136, 35);
            this.btnKagit.TabIndex = 3;
            this.btnKagit.Text = "Kağıt";
            this.btnKagit.UseVisualStyleBackColor = true;
            this.btnKagit.Click += new System.EventHandler(this.btnKagit_Click);
            // 
            // btnKagitBosalt
            // 
            this.btnKagitBosalt.Enabled = false;
            this.btnKagitBosalt.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnKagitBosalt.Location = new System.Drawing.Point(558, 306);
            this.btnKagitBosalt.Name = "btnKagitBosalt";
            this.btnKagitBosalt.Size = new System.Drawing.Size(136, 35);
            this.btnKagitBosalt.TabIndex = 4;
            this.btnKagitBosalt.Text = "Boşalt";
            this.btnKagitBosalt.UseVisualStyleBackColor = true;
            this.btnKagitBosalt.Click += new System.EventHandler(this.btnKagitBosalt_Click);
            // 
            // btnCam
            // 
            this.btnCam.Enabled = false;
            this.btnCam.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnCam.Location = new System.Drawing.Point(344, 366);
            this.btnCam.Name = "btnCam";
            this.btnCam.Size = new System.Drawing.Size(136, 35);
            this.btnCam.TabIndex = 5;
            this.btnCam.Text = "Cam";
            this.btnCam.UseVisualStyleBackColor = true;
            this.btnCam.Click += new System.EventHandler(this.btnCam_Click);
            // 
            // btnCamBosalt
            // 
            this.btnCamBosalt.Enabled = false;
            this.btnCamBosalt.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnCamBosalt.Location = new System.Drawing.Point(344, 634);
            this.btnCamBosalt.Name = "btnCamBosalt";
            this.btnCamBosalt.Size = new System.Drawing.Size(136, 35);
            this.btnCamBosalt.TabIndex = 6;
            this.btnCamBosalt.Text = "Boşalt";
            this.btnCamBosalt.UseVisualStyleBackColor = true;
            this.btnCamBosalt.Click += new System.EventHandler(this.btnCamBosalt_Click);
            // 
            // btnMetal
            // 
            this.btnMetal.Enabled = false;
            this.btnMetal.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnMetal.Location = new System.Drawing.Point(558, 366);
            this.btnMetal.Name = "btnMetal";
            this.btnMetal.Size = new System.Drawing.Size(136, 35);
            this.btnMetal.TabIndex = 7;
            this.btnMetal.Text = "Metal";
            this.btnMetal.UseVisualStyleBackColor = true;
            this.btnMetal.Click += new System.EventHandler(this.btnMetal_Click);
            // 
            // btnMetalBosalt
            // 
            this.btnMetalBosalt.Enabled = false;
            this.btnMetalBosalt.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnMetalBosalt.Location = new System.Drawing.Point(558, 634);
            this.btnMetalBosalt.Name = "btnMetalBosalt";
            this.btnMetalBosalt.Size = new System.Drawing.Size(136, 35);
            this.btnMetalBosalt.TabIndex = 8;
            this.btnMetalBosalt.Text = "Boşalt";
            this.btnMetalBosalt.UseVisualStyleBackColor = true;
            this.btnMetalBosalt.Click += new System.EventHandler(this.btnMetalBosalt_Click);
            // 
            // btnYeniOyun
            // 
            this.btnYeniOyun.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnYeniOyun.Location = new System.Drawing.Point(41, 264);
            this.btnYeniOyun.Name = "btnYeniOyun";
            this.btnYeniOyun.Size = new System.Drawing.Size(207, 60);
            this.btnYeniOyun.TabIndex = 9;
            this.btnYeniOyun.Text = "YENİ OYUN";
            this.btnYeniOyun.UseVisualStyleBackColor = true;
            this.btnYeniOyun.Click += new System.EventHandler(this.btnYeniOyun_Click);
            // 
            // btnCıkıs
            // 
            this.btnCıkıs.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnCıkıs.Location = new System.Drawing.Point(41, 612);
            this.btnCıkıs.Name = "btnCıkıs";
            this.btnCıkıs.Size = new System.Drawing.Size(207, 48);
            this.btnCıkıs.TabIndex = 10;
            this.btnCıkıs.Text = "ÇIKIŞ";
            this.btnCıkıs.UseVisualStyleBackColor = true;
            this.btnCıkıs.Click += new System.EventHandler(this.btnCıkıs_Click);
            // 
            // listOrganik
            // 
            this.listOrganik.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listOrganik.FormattingEnabled = true;
            this.listOrganik.ItemHeight = 15;
            this.listOrganik.Location = new System.Drawing.Point(344, 102);
            this.listOrganik.Name = "listOrganik";
            this.listOrganik.Size = new System.Drawing.Size(136, 169);
            this.listOrganik.TabIndex = 11;
            // 
            // listKagit
            // 
            this.listKagit.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listKagit.FormattingEnabled = true;
            this.listKagit.ItemHeight = 15;
            this.listKagit.Location = new System.Drawing.Point(558, 102);
            this.listKagit.Name = "listKagit";
            this.listKagit.Size = new System.Drawing.Size(136, 169);
            this.listKagit.TabIndex = 12;
            // 
            // listCam
            // 
            this.listCam.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listCam.FormattingEnabled = true;
            this.listCam.ItemHeight = 15;
            this.listCam.Location = new System.Drawing.Point(344, 422);
            this.listCam.Name = "listCam";
            this.listCam.Size = new System.Drawing.Size(136, 169);
            this.listCam.TabIndex = 13;
            // 
            // listMetal
            // 
            this.listMetal.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listMetal.FormattingEnabled = true;
            this.listMetal.ItemHeight = 15;
            this.listMetal.Location = new System.Drawing.Point(558, 422);
            this.listMetal.Name = "listMetal";
            this.listMetal.Size = new System.Drawing.Size(136, 169);
            this.listMetal.TabIndex = 14;
            // 
            // label1
            // 
            this.label1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label1.Location = new System.Drawing.Point(41, 351);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(207, 35);
            this.label1.TabIndex = 15;
            this.label1.Text = "SÜRE";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lblSure
            // 
            this.lblSure.BackColor = System.Drawing.Color.Aqua;
            this.lblSure.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblSure.Location = new System.Drawing.Point(41, 386);
            this.lblSure.Name = "lblSure";
            this.lblSure.Size = new System.Drawing.Size(207, 73);
            this.lblSure.TabIndex = 16;
            this.lblSure.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label3
            // 
            this.label3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label3.Location = new System.Drawing.Point(38, 486);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(210, 30);
            this.label3.TabIndex = 17;
            this.label3.Text = "PUAN";
            this.label3.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lblPuan
            // 
            this.lblPuan.BackColor = System.Drawing.Color.Aqua;
            this.lblPuan.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblPuan.Location = new System.Drawing.Point(41, 516);
            this.lblPuan.Name = "lblPuan";
            this.lblPuan.Size = new System.Drawing.Size(207, 68);
            this.lblPuan.TabIndex = 18;
            this.lblPuan.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // prgOrganik
            // 
            this.prgOrganik.Enabled = false;
            this.prgOrganik.Location = new System.Drawing.Point(344, 277);
            this.prgOrganik.Name = "prgOrganik";
            this.prgOrganik.Size = new System.Drawing.Size(136, 23);
            this.prgOrganik.TabIndex = 19;
            // 
            // prgMetal
            // 
            this.prgMetal.Location = new System.Drawing.Point(558, 600);
            this.prgMetal.Name = "prgMetal";
            this.prgMetal.Size = new System.Drawing.Size(136, 23);
            this.prgMetal.TabIndex = 20;
            // 
            // prgCam
            // 
            this.prgCam.Location = new System.Drawing.Point(344, 600);
            this.prgCam.Name = "prgCam";
            this.prgCam.Size = new System.Drawing.Size(136, 23);
            this.prgCam.TabIndex = 21;
            // 
            // prgKagit
            // 
            this.prgKagit.Location = new System.Drawing.Point(558, 277);
            this.prgKagit.Name = "prgKagit";
            this.prgKagit.Size = new System.Drawing.Size(136, 23);
            this.prgKagit.TabIndex = 22;
            // 
            // timer1
            // 
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // Form1
            // 
            this.AllowDrop = true;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDark;
            this.ClientSize = new System.Drawing.Size(759, 681);
            this.Controls.Add(this.prgKagit);
            this.Controls.Add(this.prgCam);
            this.Controls.Add(this.prgMetal);
            this.Controls.Add(this.prgOrganik);
            this.Controls.Add(this.lblPuan);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.lblSure);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.listMetal);
            this.Controls.Add(this.listCam);
            this.Controls.Add(this.listKagit);
            this.Controls.Add(this.listOrganik);
            this.Controls.Add(this.btnCıkıs);
            this.Controls.Add(this.btnYeniOyun);
            this.Controls.Add(this.btnMetalBosalt);
            this.Controls.Add(this.btnMetal);
            this.Controls.Add(this.btnCamBosalt);
            this.Controls.Add(this.btnCam);
            this.Controls.Add(this.btnKagitBosalt);
            this.Controls.Add(this.btnKagit);
            this.Controls.Add(this.btnOrganikBosalt);
            this.Controls.Add(this.btnOrganik);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button btnOrganik;
        private System.Windows.Forms.Button btnOrganikBosalt;
        private System.Windows.Forms.Button btnKagit;
        private System.Windows.Forms.Button btnKagitBosalt;
        private System.Windows.Forms.Button btnCam;
        private System.Windows.Forms.Button btnCamBosalt;
        private System.Windows.Forms.Button btnMetal;
        private System.Windows.Forms.Button btnMetalBosalt;
        private System.Windows.Forms.Button btnYeniOyun;
        private System.Windows.Forms.Button btnCıkıs;
        private System.Windows.Forms.ListBox listOrganik;
        private System.Windows.Forms.ListBox listKagit;
        private System.Windows.Forms.ListBox listCam;
        private System.Windows.Forms.ListBox listMetal;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lblSure;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label lblPuan;
        private System.Windows.Forms.ProgressBar prgOrganik;
        private System.Windows.Forms.ProgressBar prgMetal;
        private System.Windows.Forms.ProgressBar prgCam;
        private System.Windows.Forms.ProgressBar prgKagit;
        private System.Windows.Forms.Timer timer1;
    }
}

