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
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace G191210088
{
    public partial class Form1 : Form
    {
        int a = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void txtSayi1_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtSayi2_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnArkadas_Click(object sender, EventArgs e)
        {
            if (a == 0)
            {
                a = 1;
            }
            else
            {
                txtSayi1.ReadOnly = true;

                txtSayi2.ReadOnly = true;
            }
            int sayi1;
            int sayac1 = 0;

            sayi1 = Convert.ToInt32(txtSayi1.Text);

            int[] sayi1Bolenleri = new int[sayi1];

            for (int i = 1; i < sayi1; i++)  // 1. Sayinin bölenleri bulundu.
            {
                if (sayi1 % i == 0)
                {
                    sayi1Bolenleri[sayac1] = i;
                    sayac1++;
                }

            }

            int sayi2;
            int sayac2 = 0;

            sayi2 = Convert.ToInt32(txtSayi2.Text);

            int[] sayi2Bolenleri = new int[sayi2];

            for (int i = 1; i < sayi2; i++)   //2. Sayinin bölenleri bulundu.
            {
                if (sayi2 % i == 0)
                {
                    sayi2Bolenleri[sayac2] = i;
                    sayac2++;
                }

            }


            int toplam1 = 0;
            int toplam2 = 0;


            for (int i = 0; i < sayac1; i++)   // 1.Sayinin Bolenleri Toplandı.
            {
                toplam1 = toplam1 + sayi1Bolenleri[i];
            }

            for (int i = 0; i < sayac2; i++)   // 2.Sayinin Bolenleri Toplandı.
            {
                toplam2 = toplam2 + sayi2Bolenleri[i];
            }

            ClientSize = new System.Drawing.Size(800, 400);




            this.listBox2 = new System.Windows.Forms.ListBox();
            this.listBox3 = new System.Windows.Forms.ListBox();
            this.lblToplam = new System.Windows.Forms.Label();
            this.lbly = new System.Windows.Forms.Label();
            this.lblx = new System.Windows.Forms.Label();
            this.txtSayiX = new System.Windows.Forms.TextBox();
            this.txtSayiY = new System.Windows.Forms.TextBox();





            // 
            // listBox2
            // 
            this.listBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBox2.FormattingEnabled = true;
            this.listBox2.ItemHeight = 20;
            this.listBox2.Location = new System.Drawing.Point(403, 75);
            this.listBox2.Name = "listBox2";
            this.listBox2.Size = new System.Drawing.Size(120, 224);
            this.listBox2.TabIndex = 6;

            for (int i = 0; i < sayac1; i++)
            {
                listBox2.Items.Add(sayi1Bolenleri[i]);
            }

            // 
            // listBox3
            // 
            this.listBox3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBox3.FormattingEnabled = true;
            this.listBox3.ItemHeight = 20;
            this.listBox3.Location = new System.Drawing.Point(552, 75);
            this.listBox3.Name = "listBox3";
            this.listBox3.Size = new System.Drawing.Size(120, 224);
            this.listBox3.TabIndex = 7;

            for (int i = 0; i < sayac2; i++)
            {
                listBox3.Items.Add(sayi2Bolenleri[i]);
            }

            // 
            // lblToplam
            // 
            this.lblToplam.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblToplam.Location = new System.Drawing.Point(271, 317);
            this.lblToplam.Name = "lblToplam";
            this.lblToplam.Size = new System.Drawing.Size(126, 23);
            this.lblToplam.TabIndex = 8;
            this.lblToplam.Text = "TOPLAMLAR";
            // 
            // lbly
            // 
            this.lbly.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lbly.Location = new System.Drawing.Point(584, 41);
            this.lbly.Name = "lbly";
            this.lbly.Size = new System.Drawing.Size(35, 23);
            this.lbly.TabIndex = 9;
            this.lbly.Text = "Y";
            // 
            // lblx
            // 
            this.lblx.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblx.Location = new System.Drawing.Point(444, 41);
            this.lblx.Name = "lblx";
            this.lblx.Size = new System.Drawing.Size(32, 23);
            this.lblx.TabIndex = 10;
            this.lblx.Text = "X";
            // 
            // txtSayiX
            // 
            this.txtSayiX.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.txtSayiX.Location = new System.Drawing.Point(403, 314);
            this.txtSayiX.Name = "txtSayiX";
            this.txtSayiX.Size = new System.Drawing.Size(120, 26);
            this.txtSayiX.TabIndex = 11;
            this.txtSayiX.Text = Convert.ToString(toplam1);
            // 
            // txtSayiY
            // 
            this.txtSayiY.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.txtSayiY.Location = new System.Drawing.Point(552, 314);
            this.txtSayiY.Name = "txtSayiY";
            this.txtSayiY.Size = new System.Drawing.Size(120, 26);
            this.txtSayiY.TabIndex = 12;
            this.txtSayiY.Text = Convert.ToString(toplam2);

            this.Controls.Add(this.txtSayiY);
            this.Controls.Add(this.txtSayiX);
            this.Controls.Add(this.lblx);
            this.Controls.Add(this.lbly);
            this.Controls.Add(this.lblToplam);
            this.Controls.Add(this.listBox3);
            this.Controls.Add(this.listBox2);




        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }


        private System.Windows.Forms.ListBox listBox2;
        private System.Windows.Forms.ListBox listBox3;
        private System.Windows.Forms.Label lblToplam;
        private System.Windows.Forms.Label lbly;
        private System.Windows.Forms.Label lblx;
        private System.Windows.Forms.TextBox txtSayiX;
        private System.Windows.Forms.TextBox txtSayiY;

        private void btnSon_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
