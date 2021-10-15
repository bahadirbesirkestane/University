/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2019-2020 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........:  G191210088
**				ÖĞRENCİ ADI............:  Bahadır Beşir Kestane
**              DERSİN ALINDIĞI GRUP...:  2B
****************************************************************************/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace odev1
{
    class Program
    {
        static void Main(string[] args)
        {


            int ogrSayisi = 0;
            int ogrSayisi1 = 0;
            double ortalamaNot;
            double odevEtki;
            double vizeEtki;
            double finalEtki;

            FileStream kayit1 = new FileStream("kayitlar.txt", FileMode.Open, FileAccess.Read);   

            StreamReader oku1 = new StreamReader(kayit1);  // Kayıt dosyası okundu.



            FileStream dosya = new FileStream("Harf_Notu.txt", FileMode.OpenOrCreate, FileAccess.Write);  // Harf notlarını yazacak dosya olusturuldu.

            StreamWriter yaz = new StreamWriter(dosya);


            string yazi1 = oku1.ReadLine();

            do     // Ogrenci sayisini bulmak icin dosya okundu.
            {
                yazi1 = oku1.ReadLine();      


                ogrSayisi1++;

            } while (yazi1 != null);

            string[] isim = new string[ogrSayisi1];       //
            string[] soyisim = new string[ogrSayisi1];    //
            int[] numara = new int[ogrSayisi1];           //
            double[] odev = new double[ogrSayisi1];       //
            double[] vize = new double[ogrSayisi1];       //   Ogrencilere ait gerekli diziler tanımlandı.
            double[] final = new double[ogrSayisi1];      //
            string[] harfNotu = new string[9];            //
            double[] harfNotuSayac = new double[9];       //
            double[] yuzde = new double[9];               //



            FileStream kayit = new FileStream("kayitlar.txt", FileMode.Open, FileAccess.Read);  

            StreamReader oku = new StreamReader(kayit);

            string yazi = oku.ReadLine();

            while (yazi != null)
            {



                string[] kelime = yazi.Split(' ');


                yazi = oku.ReadLine();


                isim[ogrSayisi] = kelime[0];                          //
                soyisim[ogrSayisi] = kelime[1];                       //
                numara[ogrSayisi] = Convert.ToInt32(kelime[2]);       //
                odev[ogrSayisi] = Convert.ToDouble(kelime[3]);        //  
                vize[ogrSayisi] = Convert.ToDouble(kelime[4]);        //
                final[ogrSayisi] = Convert.ToDouble(kelime[5]);       //    Gerekli tip donusumleri yapildi.
                                                                      //
                odevEtki = Convert.ToDouble(kelime[6]);               //
                vizeEtki = Convert.ToDouble(kelime[7]);               //
                finalEtki = Convert.ToDouble(kelime[8]);              //



                odev[ogrSayisi] = (odevEtki / 100) * odev[ogrSayisi];
                vize[ogrSayisi] = (vizeEtki / 100) * vize[ogrSayisi];
                final[ogrSayisi] = (finalEtki / 100) * final[ogrSayisi];

                ortalamaNot = odev[ogrSayisi] + vize[ogrSayisi] + final[ogrSayisi];  //Her ogrencinin ortalamsı hesaplandı.

                if (ortalamaNot < 40)      //Ortalama nota gore harf notu verildi.
                {
                    harfNotu[0] = "FF";
                    harfNotuSayac[0]++;
                }
                else if (40 <= ortalamaNot && ortalamaNot < 50)
                {
                    harfNotu[1] = "FD";
                    harfNotuSayac[1]++;
                }
                else if (50 <= ortalamaNot && ortalamaNot < 58)
                {
                    harfNotu[2] = "DD";
                    harfNotuSayac[2]++;
                }
                else if (58 <= ortalamaNot && ortalamaNot < 65)
                {
                    harfNotu[3] = "DC";
                    harfNotuSayac[3]++;
                }
                else if (65 <= ortalamaNot && ortalamaNot < 75)
                {
                    harfNotu[4] = "CC";
                    harfNotuSayac[4]++;
                }
                else if (75 <= ortalamaNot && ortalamaNot < 80)
                {
                    harfNotu[5] = "CB";
                    harfNotuSayac[5]++;
                }
                else if (80 <= ortalamaNot && ortalamaNot < 85)
                {
                    harfNotu[6] = "BB";
                    harfNotuSayac[6]++;
                }
                else if (85 <= ortalamaNot && ortalamaNot < 90)
                {
                    harfNotu[7] = "BA";
                    harfNotuSayac[7]++;
                }
                else if (90 <= ortalamaNot && ortalamaNot <= 100)
                {
                    harfNotu[8] = "AA";
                    harfNotuSayac[8]++;

                }


                ogrSayisi++;

            }

            

            for (int i =0; i <9; i++)  // Sınıf ortalamaları ve yuzdeleri txt ye aktarıldı.
            {
                    
                if (harfNotu[i] != null)
                {


                   yuzde[i] = (harfNotuSayac[i] / Convert.ToDouble(ogrSayisi)) * 100;


                    yaz.WriteLine(harfNotu[i] + " Harf notuna sahip kisi sayisi : " + harfNotuSayac[i]);
                    yaz.WriteLine(harfNotu[i] + " Harf noutunun yuzdesi : %" + yuzde[i]);

                }
                   
            }

           

            yaz.Flush();

            kayit.Close();
            oku.Close();
            yaz.Close();
            dosya.Close();

        

        }   
    }
}

