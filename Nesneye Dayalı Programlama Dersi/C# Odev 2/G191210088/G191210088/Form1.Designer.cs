/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2019-2020 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........: 2
**				ÖĞRENCİ ADI SOYADI...........: Bahadır Beşir Kestane
**				ÖĞRENCİ NUMARASI.......: G191210088
**
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
            this.btnSon = new System.Windows.Forms.Button();
            this.btnArkadas = new System.Windows.Forms.Button();
            this.lblSayi1 = new System.Windows.Forms.Label();
            this.lblSayi2 = new System.Windows.Forms.Label();
            this.txtSayi1 = new System.Windows.Forms.TextBox();
            this.txtSayi2 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // btnSon
            // 
            this.btnSon.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnSon.Location = new System.Drawing.Point(214, 181);
            this.btnSon.Name = "btnSon";
            this.btnSon.Size = new System.Drawing.Size(117, 46);
            this.btnSon.TabIndex = 0;
            this.btnSon.Text = "Son";
            this.btnSon.UseVisualStyleBackColor = true;
            this.btnSon.Click += new System.EventHandler(this.btnSon_Click);
            // 
            // btnArkadas
            // 
            this.btnArkadas.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnArkadas.Location = new System.Drawing.Point(54, 181);
            this.btnArkadas.Name = "btnArkadas";
            this.btnArkadas.Size = new System.Drawing.Size(117, 46);
            this.btnArkadas.TabIndex = 1;
            this.btnArkadas.Text = "Arkadaş Mı";
            this.btnArkadas.UseVisualStyleBackColor = true;
            this.btnArkadas.Click += new System.EventHandler(this.btnArkadas_Click);
            // 
            // lblSayi1
            // 
            this.lblSayi1.AllowDrop = true;
            this.lblSayi1.AutoSize = true;
            this.lblSayi1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblSayi1.Location = new System.Drawing.Point(50, 49);
            this.lblSayi1.Name = "lblSayi1";
            this.lblSayi1.Size = new System.Drawing.Size(21, 20);
            this.lblSayi1.TabIndex = 2;
            this.lblSayi1.Text = "X";
            // 
            // lblSayi2
            // 
            this.lblSayi2.AllowDrop = true;
            this.lblSayi2.AutoSize = true;
            this.lblSayi2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblSayi2.Location = new System.Drawing.Point(50, 110);
            this.lblSayi2.Name = "lblSayi2";
            this.lblSayi2.Size = new System.Drawing.Size(21, 20);
            this.lblSayi2.TabIndex = 3;
            this.lblSayi2.Text = "Y";
            // 
            // txtSayi1
            // 
            this.txtSayi1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.txtSayi1.Location = new System.Drawing.Point(109, 49);
            this.txtSayi1.Name = "txtSayi1";
            this.txtSayi1.Size = new System.Drawing.Size(142, 26);
            this.txtSayi1.TabIndex = 4;
            this.txtSayi1.TextChanged += new System.EventHandler(this.txtSayi1_TextChanged);
            // 
            // txtSayi2
            // 
            this.txtSayi2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.txtSayi2.Location = new System.Drawing.Point(109, 110);
            this.txtSayi2.Name = "txtSayi2";
            this.txtSayi2.Size = new System.Drawing.Size(142, 26);
            this.txtSayi2.TabIndex = 5;
            this.txtSayi2.TextChanged += new System.EventHandler(this.txtSayi2_TextChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(384, 283);
            this.Controls.Add(this.txtSayi2);
            this.Controls.Add(this.txtSayi1);
            this.Controls.Add(this.lblSayi2);
            this.Controls.Add(this.lblSayi1);
            this.Controls.Add(this.btnArkadas);
            this.Controls.Add(this.btnSon);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnSon;
        private System.Windows.Forms.Button btnArkadas;
        private System.Windows.Forms.Label lblSayi1;
        private System.Windows.Forms.Label lblSayi2;
        private System.Windows.Forms.TextBox txtSayi1;
        private System.Windows.Forms.TextBox txtSayi2;
    }
}

