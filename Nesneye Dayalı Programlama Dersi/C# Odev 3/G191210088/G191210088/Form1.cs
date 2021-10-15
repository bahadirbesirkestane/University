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
        Urun x;
       
        Buzdolabi buzdolabi = new Buzdolabi("Buzdolabı", "Beko", "C40", "NoFrost", 3500, 0, 500, "A++");
        LedTv ledTv = new LedTv("Televizyon","Vestel","Titan","HD",4000,0,100,1080);
        CepTel cepTel = new CepTel("Telefon", "Sony", "Z5", "Hızlı", 2500, 0, 128, 4, 2800);
        Laptop laptop = new Laptop("Bilgisayar","HP","Omen","Güçlü Performans",6000,0,17,1080,256,16,10000);

        public Form1()
        {
            InitializeComponent();

            
            lblBuzdolabiFiyat.Text = Convert.ToString(buzdolabi.hamFiyat);
            lblBuzdolabiStok.Text = Convert.ToString(buzdolabi.stokAdedi);
            lblTelefonFiyat.Text = Convert.ToString(cepTel.hamFiyat);
            lblTelefonStok.Text = Convert.ToString(cepTel.stokAdedi);
            lblLaptpFiyat.Text = Convert.ToString(laptop.hamFiyat);
            lblLaptopStok.Text = Convert.ToString(laptop.stokAdedi);
            lblTvFiyat.Text = Convert.ToString(ledTv.hamFiyat);
            lblTvStok.Text = Convert.ToString(ledTv.stokAdedi);

           

        }
        int a = 0;
     
        private void button1_Click(object sender, EventArgs e)
        {
            if(a!=0)
            {
                listBox1.Items.Clear();
                listBox2.Items.Clear();
                listBox3.Items.Clear();

                a = 1;
            }
            
           
            int urunSayisi = 4;
            double toplam=0;
            double[] secilen = new double[urunSayisi];
            String[] isimler = new String[urunSayisi];
            double[] fiyatlar = new double[urunSayisi];
           
            buzdolabi.secilenAdet = Convert.ToDouble(nudBuzdolabiAdet.Value);
            cepTel.secilenAdet = Convert.ToDouble(nudTelefonAdet.Value);
            ledTv.secilenAdet = Convert.ToDouble(nudTvAdet.Value);
            laptop.secilenAdet = Convert.ToDouble(nudLaptopAdet.Value);

            secilen[0] = buzdolabi.secilenAdet;
            secilen[1] = cepTel.secilenAdet;
            secilen[2] = ledTv.secilenAdet;
            secilen[3] = laptop.secilenAdet;

            isimler[0] = buzdolabi.ad;
            isimler[1] = cepTel.ad;
            isimler[2] = ledTv.ad;
            isimler[3] = laptop.ad;

            fiyatlar[0] = buzdolabi.kdvUygula();
            fiyatlar[1] = cepTel.kdvUygula();
            fiyatlar[2] = ledTv.kdvUygula();
            fiyatlar[3] = laptop.kdvUygula();


            for (int i=0;i<urunSayisi;i++)
            {
                if(secilen[i]!=0)
                {
                    listBox1.Items.Add(secilen[i]);
                    listBox2.Items.Add(isimler[i]);
                    listBox3.Items.Add(fiyatlar[i]);

                    toplam += fiyatlar[i];

                }
                  
            }



            lblToplamFiyat.Text = Convert.ToString(toplam);

            buzdolabi.stokAdedi -= buzdolabi.secilenAdet;
            cepTel.stokAdedi -= cepTel.secilenAdet;
            ledTv.stokAdedi -= ledTv.secilenAdet;
            laptop.stokAdedi -= laptop.secilenAdet;

            lblBuzdolabiStok.Text = Convert.ToString(buzdolabi.stokAdedi);
            lblTelefonStok.Text = Convert.ToString(cepTel.stokAdedi);
            lblLaptopStok.Text = Convert.ToString(laptop.stokAdedi);
            lblTvStok.Text = Convert.ToString(ledTv.stokAdedi);


            a = 1;
            

        }

        private void button2_Click(object sender, EventArgs e)
        {

            listBox1.Items.Clear();
            listBox2.Items.Clear();
            listBox3.Items.Clear();

            lblToplamFiyat.Text = " ";

            buzdolabi.stokAdedi += buzdolabi.secilenAdet;
            cepTel.stokAdedi += cepTel.secilenAdet;
            ledTv.stokAdedi += ledTv.secilenAdet;
            laptop.stokAdedi += laptop.secilenAdet;

            lblBuzdolabiStok.Text = Convert.ToString(buzdolabi.stokAdedi);
            lblTelefonStok.Text = Convert.ToString(cepTel.stokAdedi);
            lblLaptopStok.Text = Convert.ToString(laptop.stokAdedi);
            lblTvStok.Text = Convert.ToString(ledTv.stokAdedi);

            nudBuzdolabiAdet.Value = 0;
            nudLaptopAdet.Value = 0;
            nudTelefonAdet.Value = 0;
            nudTvAdet.Value = 0;

            

        }
    }
}
