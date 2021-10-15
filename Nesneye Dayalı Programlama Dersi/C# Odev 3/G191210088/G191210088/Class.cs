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
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace G191210088
{

    public class Urun
    {
        public String ad;
        public String marka;
        public String model;
        public String ozellik;
        public double stokAdedi;
        public double hamFiyat;
        public double secilenAdet;
        public Random random = new Random();

    }
    public class Buzdolabi : Urun
    {
        public double icHacim;
        public String enerjiSinifi;
       

        public Buzdolabi(String ad, String marka, String model, String ozellik, double hamFiyat, double secilenAdet, double icHacim, String enerjiSinifi)
        {
            this.ad = ad;
            this.marka = marka;
            this.model = model;
            this.ozellik = ozellik;
            stokAdedi = random.Next(1, 100);
            this.hamFiyat = hamFiyat;
            this.secilenAdet = secilenAdet;
            this.icHacim = icHacim;
            this.enerjiSinifi = enerjiSinifi;



        }
        public double kdvUygula()
        {
            double kdvliFiyat = hamFiyat * 1.05 * secilenAdet;
            return kdvliFiyat;
        }
    }
    public class LedTv : Urun
    {
        public double ekranBoyutu;
        public double ekranCozunurlugu;


        public LedTv(String ad, String marka, String model, String ozellik, double hamFiyat, double secilenAdet, double ekranBoyutu, double ekranCozunurlugu)
        {
            this.ad = ad;
            this.marka = marka;
            this.model = model;
            this.ozellik = ozellik;
            stokAdedi = random.Next(1, 100);
            this.hamFiyat = hamFiyat;
            this.secilenAdet = secilenAdet;
            this.ekranBoyutu = ekranBoyutu;
            this.ekranCozunurlugu = ekranCozunurlugu;

        }

        public double kdvUygula()
        {
            double kdvliFiyat = hamFiyat * 1.18 * secilenAdet;
            return kdvliFiyat;
        }
    }
    public class CepTel : Urun
    {
        public double dahiliHafiza;
        public double ramKapasitesi;
        public double pilGucu;


        public CepTel(String ad, String marka, String model, String ozellik, double hamFiyat, double secilenAdet, double dahiliHafiza, double ramKapasitesi, double pilGucu)
        {
            this.ad = ad;
            this.marka = marka;
            this.model = model;
            this.ozellik = ozellik;
            stokAdedi = random.Next(1, 100);
            this.hamFiyat = hamFiyat;
            this.secilenAdet = secilenAdet;
            this.dahiliHafiza = dahiliHafiza;
            this.ramKapasitesi = ramKapasitesi;
            this.pilGucu = pilGucu;
        }




        public double kdvUygula()
        {
            double kdvliFiyat = hamFiyat * 1.2 * secilenAdet;
            return kdvliFiyat;
        }

    }
    public class Laptop : Urun
    {
        public double ekranBoyutu;
        public double ekranCozunurlugu;
        public double dahiliHafiza;
        public double ramKapasitesi;
        public double pilGucu;
        Random random3 = new Random();

        public Laptop(String ad, String marka, String model, String ozellik, double hamFiyat, double secilenAdet, double ekranBoyutu, double ekranCozunurlugu, double dahiliHafiza, double ramKapasitesi, double pilGucu)
        {
            this.ad = ad;
            this.marka = marka;
            this.model = model;
            this.ozellik = ozellik;
            stokAdedi = random3.Next(1, 100);
            this.hamFiyat = hamFiyat;
            this.secilenAdet = secilenAdet;
            this.dahiliHafiza = dahiliHafiza;
            this.ramKapasitesi = ramKapasitesi;
            this.pilGucu = pilGucu;
        }

        public double kdvUygula()
        {
            double kdvliFiyat = hamFiyat * 1.15 * secilenAdet;

            return kdvliFiyat;

        }

    }

    public class Sepet
    {
        public double ToplamKdvliFiyat;

        Laptop lap;
        Buzdolabi buz;
        CepTel tel;
        LedTv led;

        public double SepeteUrunEkle(Urun urun)
        {
            ToplamKdvliFiyat = lap.kdvUygula() + led.kdvUygula() + tel.kdvUygula() + buz.kdvUygula();
            return ToplamKdvliFiyat;
        }


    }
}
