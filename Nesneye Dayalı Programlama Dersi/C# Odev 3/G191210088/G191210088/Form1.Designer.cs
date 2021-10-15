/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2019-2020 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........: 3
**				ÖĞRENCİ ADI............: Bahadır Beşir Kestane
**				ÖĞRENCİ NUMARASI.......: G191210088
**              DERSİN ALINDIĞI GRUP...: 2B
****************************************************************************/
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
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.pictureBox3 = new System.Windows.Forms.PictureBox();
            this.pictureBox4 = new System.Windows.Forms.PictureBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.nudBuzdolabiAdet = new System.Windows.Forms.NumericUpDown();
            this.nudTelefonAdet = new System.Windows.Forms.NumericUpDown();
            this.nudTvAdet = new System.Windows.Forms.NumericUpDown();
            this.nudLaptopAdet = new System.Windows.Forms.NumericUpDown();
            this.lblBuzdolabiFiyat = new System.Windows.Forms.Label();
            this.lblBuzdolabiStok = new System.Windows.Forms.Label();
            this.lblTvFiyat = new System.Windows.Forms.Label();
            this.lblTvStok = new System.Windows.Forms.Label();
            this.lblLaptpFiyat = new System.Windows.Forms.Label();
            this.lblLaptopStok = new System.Windows.Forms.Label();
            this.lblTelefonFiyat = new System.Windows.Forms.Label();
            this.lblTelefonStok = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.lblToplamFiyat = new System.Windows.Forms.Label();
            this.label24 = new System.Windows.Forms.Label();
            this.listBox3 = new System.Windows.Forms.ListBox();
            this.listBox2 = new System.Windows.Forms.ListBox();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.label13 = new System.Windows.Forms.Label();
            this.label14 = new System.Windows.Forms.Label();
            this.label15 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudBuzdolabiAdet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudTelefonAdet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudTvAdet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudLaptopAdet)).BeginInit();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::G191210088.Properties.Resources.buz;
            this.pictureBox1.Location = new System.Drawing.Point(331, 25);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(174, 143);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = global::G191210088.Properties.Resources.telefon;
            this.pictureBox2.Location = new System.Drawing.Point(331, 301);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(174, 135);
            this.pictureBox2.TabIndex = 1;
            this.pictureBox2.TabStop = false;
            // 
            // pictureBox3
            // 
            this.pictureBox3.Image = global::G191210088.Properties.Resources.pc;
            this.pictureBox3.Location = new System.Drawing.Point(29, 301);
            this.pictureBox3.Name = "pictureBox3";
            this.pictureBox3.Size = new System.Drawing.Size(171, 135);
            this.pictureBox3.TabIndex = 2;
            this.pictureBox3.TabStop = false;
            // 
            // pictureBox4
            // 
            this.pictureBox4.Image = global::G191210088.Properties.Resources.TV;
            this.pictureBox4.Location = new System.Drawing.Point(29, 28);
            this.pictureBox4.Name = "pictureBox4";
            this.pictureBox4.Size = new System.Drawing.Size(171, 118);
            this.pictureBox4.TabIndex = 3;
            this.pictureBox4.TabStop = false;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.nudBuzdolabiAdet);
            this.groupBox1.Controls.Add(this.nudTelefonAdet);
            this.groupBox1.Controls.Add(this.nudTvAdet);
            this.groupBox1.Controls.Add(this.nudLaptopAdet);
            this.groupBox1.Controls.Add(this.lblBuzdolabiFiyat);
            this.groupBox1.Controls.Add(this.lblBuzdolabiStok);
            this.groupBox1.Controls.Add(this.lblTvFiyat);
            this.groupBox1.Controls.Add(this.lblTvStok);
            this.groupBox1.Controls.Add(this.lblLaptpFiyat);
            this.groupBox1.Controls.Add(this.lblLaptopStok);
            this.groupBox1.Controls.Add(this.lblTelefonFiyat);
            this.groupBox1.Controls.Add(this.lblTelefonStok);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.label8);
            this.groupBox1.Controls.Add(this.label9);
            this.groupBox1.Controls.Add(this.label10);
            this.groupBox1.Controls.Add(this.label11);
            this.groupBox1.Controls.Add(this.label12);
            this.groupBox1.Controls.Add(this.pictureBox1);
            this.groupBox1.Controls.Add(this.pictureBox4);
            this.groupBox1.Controls.Add(this.pictureBox2);
            this.groupBox1.Controls.Add(this.pictureBox3);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.groupBox1.Location = new System.Drawing.Point(27, 21);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(545, 579);
            this.groupBox1.TabIndex = 4;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "ÜRÜNLERE AİT KDV\'SİZ FİYATLAR";
            // 
            // nudBuzdolabiAdet
            // 
            this.nudBuzdolabiAdet.Location = new System.Drawing.Point(404, 264);
            this.nudBuzdolabiAdet.Name = "nudBuzdolabiAdet";
            this.nudBuzdolabiAdet.Size = new System.Drawing.Size(43, 26);
            this.nudBuzdolabiAdet.TabIndex = 5;
            // 
            // nudTelefonAdet
            // 
            this.nudTelefonAdet.Location = new System.Drawing.Point(400, 543);
            this.nudTelefonAdet.Name = "nudTelefonAdet";
            this.nudTelefonAdet.Size = new System.Drawing.Size(43, 26);
            this.nudTelefonAdet.TabIndex = 6;
            // 
            // nudTvAdet
            // 
            this.nudTvAdet.Location = new System.Drawing.Point(95, 258);
            this.nudTvAdet.Name = "nudTvAdet";
            this.nudTvAdet.Size = new System.Drawing.Size(43, 26);
            this.nudTvAdet.TabIndex = 7;
            // 
            // nudLaptopAdet
            // 
            this.nudLaptopAdet.Location = new System.Drawing.Point(95, 548);
            this.nudLaptopAdet.Name = "nudLaptopAdet";
            this.nudLaptopAdet.Size = new System.Drawing.Size(43, 26);
            this.nudLaptopAdet.TabIndex = 8;
            // 
            // lblBuzdolabiFiyat
            // 
            this.lblBuzdolabiFiyat.Location = new System.Drawing.Point(400, 185);
            this.lblBuzdolabiFiyat.Name = "lblBuzdolabiFiyat";
            this.lblBuzdolabiFiyat.Size = new System.Drawing.Size(100, 23);
            this.lblBuzdolabiFiyat.TabIndex = 8;
            // 
            // lblBuzdolabiStok
            // 
            this.lblBuzdolabiStok.Location = new System.Drawing.Point(396, 225);
            this.lblBuzdolabiStok.Name = "lblBuzdolabiStok";
            this.lblBuzdolabiStok.Size = new System.Drawing.Size(100, 23);
            this.lblBuzdolabiStok.TabIndex = 9;
            // 
            // lblTvFiyat
            // 
            this.lblTvFiyat.Location = new System.Drawing.Point(108, 167);
            this.lblTvFiyat.Name = "lblTvFiyat";
            this.lblTvFiyat.Size = new System.Drawing.Size(100, 23);
            this.lblTvFiyat.TabIndex = 10;
            // 
            // lblTvStok
            // 
            this.lblTvStok.Location = new System.Drawing.Point(108, 214);
            this.lblTvStok.Name = "lblTvStok";
            this.lblTvStok.Size = new System.Drawing.Size(100, 23);
            this.lblTvStok.TabIndex = 11;
            // 
            // lblLaptpFiyat
            // 
            this.lblLaptpFiyat.Location = new System.Drawing.Point(107, 462);
            this.lblLaptpFiyat.Name = "lblLaptpFiyat";
            this.lblLaptpFiyat.Size = new System.Drawing.Size(100, 23);
            this.lblLaptpFiyat.TabIndex = 12;
            // 
            // lblLaptopStok
            // 
            this.lblLaptopStok.Location = new System.Drawing.Point(100, 504);
            this.lblLaptopStok.Name = "lblLaptopStok";
            this.lblLaptopStok.Size = new System.Drawing.Size(100, 23);
            this.lblLaptopStok.TabIndex = 13;
            // 
            // lblTelefonFiyat
            // 
            this.lblTelefonFiyat.Location = new System.Drawing.Point(396, 462);
            this.lblTelefonFiyat.Name = "lblTelefonFiyat";
            this.lblTelefonFiyat.Size = new System.Drawing.Size(100, 23);
            this.lblTelefonFiyat.TabIndex = 14;
            // 
            // lblTelefonStok
            // 
            this.lblTelefonStok.Location = new System.Drawing.Point(395, 504);
            this.lblTelefonStok.Name = "lblTelefonStok";
            this.lblTelefonStok.Size = new System.Drawing.Size(100, 23);
            this.lblTelefonStok.TabIndex = 15;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(33, 167);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(63, 20);
            this.label1.TabIndex = 5;
            this.label1.Text = "FİYAT :";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(33, 209);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(59, 20);
            this.label2.TabIndex = 6;
            this.label2.Text = "STOK :";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(30, 255);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(60, 20);
            this.label3.TabIndex = 7;
            this.label3.Text = "ADET :";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(331, 185);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(63, 20);
            this.label4.TabIndex = 8;
            this.label4.Text = "FİYAT :";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(330, 225);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(59, 20);
            this.label5.TabIndex = 9;
            this.label5.Text = "STOK :";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(331, 265);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(60, 20);
            this.label6.TabIndex = 10;
            this.label6.Text = "ADET :";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(30, 462);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(63, 20);
            this.label7.TabIndex = 11;
            this.label7.Text = "FİYAT :";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(30, 504);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(59, 20);
            this.label8.TabIndex = 12;
            this.label8.Text = "STOK :";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(29, 545);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(60, 20);
            this.label9.TabIndex = 13;
            this.label9.Text = "ADET :";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(330, 462);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(63, 20);
            this.label10.TabIndex = 14;
            this.label10.Text = "FİYAT :";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(330, 504);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(59, 20);
            this.label11.TabIndex = 15;
            this.label11.Text = "STOK :";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(328, 545);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(60, 20);
            this.label12.TabIndex = 16;
            this.label12.Text = "ADET :";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.lblToplamFiyat);
            this.groupBox2.Controls.Add(this.label24);
            this.groupBox2.Controls.Add(this.listBox3);
            this.groupBox2.Controls.Add(this.listBox2);
            this.groupBox2.Controls.Add(this.listBox1);
            this.groupBox2.Controls.Add(this.label13);
            this.groupBox2.Controls.Add(this.label14);
            this.groupBox2.Controls.Add(this.label15);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.groupBox2.Location = new System.Drawing.Point(615, 21);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(402, 579);
            this.groupBox2.TabIndex = 0;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "SİPARİŞ ÖZETİ";
            // 
            // lblToplamFiyat
            // 
            this.lblToplamFiyat.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblToplamFiyat.Location = new System.Drawing.Point(194, 515);
            this.lblToplamFiyat.Name = "lblToplamFiyat";
            this.lblToplamFiyat.Size = new System.Drawing.Size(127, 34);
            this.lblToplamFiyat.TabIndex = 12;
            // 
            // label24
            // 
            this.label24.Location = new System.Drawing.Point(30, 518);
            this.label24.Name = "label24";
            this.label24.Size = new System.Drawing.Size(158, 25);
            this.label24.TabIndex = 11;
            this.label24.Text = "KDV\'li Toplam Fiyat : ";
            // 
            // listBox3
            // 
            this.listBox3.FormattingEnabled = true;
            this.listBox3.ItemHeight = 20;
            this.listBox3.Location = new System.Drawing.Point(294, 106);
            this.listBox3.Name = "listBox3";
            this.listBox3.Size = new System.Drawing.Size(101, 224);
            this.listBox3.TabIndex = 10;
            // 
            // listBox2
            // 
            this.listBox2.FormattingEnabled = true;
            this.listBox2.ItemHeight = 20;
            this.listBox2.Location = new System.Drawing.Point(75, 106);
            this.listBox2.Name = "listBox2";
            this.listBox2.Size = new System.Drawing.Size(213, 224);
            this.listBox2.TabIndex = 9;
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 20;
            this.listBox1.Location = new System.Drawing.Point(29, 106);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(40, 224);
            this.listBox1.TabIndex = 8;
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Location = new System.Drawing.Point(298, 70);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(89, 20);
            this.label13.TabIndex = 5;
            this.label13.Text = "KDV\'li Fiyat";
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(159, 70);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(44, 20);
            this.label14.TabIndex = 6;
            this.label14.Text = "Ürün";
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Location = new System.Drawing.Point(26, 70);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(43, 20);
            this.label15.TabIndex = 7;
            this.label15.Text = "Adet";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.button1.Location = new System.Drawing.Point(79, 618);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(234, 32);
            this.button1.TabIndex = 13;
            this.button1.Text = "Ürünleri Sepete Ekle";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.button2.Location = new System.Drawing.Point(358, 618);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(214, 32);
            this.button2.TabIndex = 14;
            this.button2.Text = "Sepeti Temizle";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlLight;
            this.ClientSize = new System.Drawing.Size(1058, 662);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "STOK :";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudBuzdolabiAdet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudTelefonAdet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudTvAdet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudLaptopAdet)).EndInit();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.PictureBox pictureBox3;
        private System.Windows.Forms.PictureBox pictureBox4;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Label lblBuzdolabiFiyat;
        private System.Windows.Forms.Label lblBuzdolabiStok;
        private System.Windows.Forms.Label lblTvFiyat;
        private System.Windows.Forms.Label lblTvStok;
        private System.Windows.Forms.Label lblLaptpFiyat;
        private System.Windows.Forms.Label lblLaptopStok;
        private System.Windows.Forms.Label lblTelefonFiyat;
        private System.Windows.Forms.Label lblTelefonStok;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.NumericUpDown nudBuzdolabiAdet;
        private System.Windows.Forms.NumericUpDown nudTelefonAdet;
        private System.Windows.Forms.NumericUpDown nudTvAdet;
        private System.Windows.Forms.NumericUpDown nudLaptopAdet;
        private System.Windows.Forms.Label lblToplamFiyat;
        private System.Windows.Forms.Label label24;
        private System.Windows.Forms.ListBox listBox3;
        private System.Windows.Forms.ListBox listBox2;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
    }
}

