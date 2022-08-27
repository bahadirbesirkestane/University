/** 
* @file Test.cpp
* @description ArrayList uzerinde ,carpma isleminde bir basamak kaydirma olmadan buyuk sayilarin faktoriyeli.
* @course Dersi 2022 Yaz Okulu 1A 
* @assignment Odev 1
* @date 05.08.2022
* @author Bahadır Beşir Keastane G191210088 bahadir.kestane@ogr.sakarya.edu.tr 
*/


#include "ArrayList.hpp"
#include <fstream>


int main()
{
	
	
	ArrayList *sonuc =new ArrayList();  // arrayListler tanımlandı 
	ArrayList *sonuc1 = new ArrayList();
	ArrayList *gelenSayi =new ArrayList();
	ArrayList *list =new ArrayList();
	ArrayList *tutucu =new ArrayList();
	ArrayList *tutucu1 =new ArrayList();
	
	
	fstream dosyaYaz;
	
	dosyaYaz.open("doc/Sonuc.txt",ios::out | ios::trunc ); // dosya trunc modda acildi.
	
	
	
	list->add(1);  // ilk değer 1 olarak atandı 9! faktoriyele kadar normal şekilde hesaplıyor.
	
	sonuc1->add(1);


	int sayi; // kullanicidan sayi almak için

	int tmp = 0; // carpma islemindeki elde ve tutucu.
	int elde = 0;

	int eldeToplama = 0; // toplama islemindeki elde ve tutucu.
	int tmpToplama = 0;

	int no; // sayiyi basamaklara ayirmak icin tanımlana degisken.
	int basamakToplami=0; // basamalatin toplamini tutan degisken.

	cout << "Faktoriyeli alinacak sayiyi giriniz : ";
	cin >> sayi;
	cout << endl;


	int atama1; // atama islemleri icin.
	

	for (int i = 1; i <= sayi; i++) // Ana for.
	{

		no = i;

		while (no > 0)  // sayi 0 olana kadar mod10 u alinip 10 a bolunuyor ve basamak toplami bulunuyor.
		{
			
			basamakToplami += no % 10;

			no = no / 10;

		}

		if (basamakToplami == 10) // Eger basamak toplami 10 ise sadece sona 0 ekleniyor ve obur tura geciyor.
		{
			list->insert(0,0);
			sonuc->insert(0,0);

			basamakToplami = 0;

			continue;

		}

		                              // basamak toplami bu senaryo icin en fazla 2 basamakli olabilir ama yinede sayi
        while (basamakToplami > 0)    //buyumesi durumunda programin calismasi için basamaklar ayriliyor.
		{
			gelenSayi->add(basamakToplami % 10);

			basamakToplami /= 10;

		}

		for (int k = 0; k < gelenSayi->size(); k++) // basamak toplaminin basamak sayisi kadar dönen for.
		{

			int gelenS = gelenSayi->elementAt(k);

			//tutucu->add(0);

			for (int j = 0; j < list->size(); j++) // carpma islemini yapan for
			{
				int gelenList = list->elementAt(j); 


				tmp = (gelenList * gelenS + elde) / 10; // sayiyila carpip / 10 yapiliyor elde bulunuyor boylece. 

				atama1 = (gelenList * gelenS + elde) % 10; // mod 10 u aliniyor ve sayi bulunuyor. 

				tutucu->add(atama1); // tutucu listede sayi toplaniyor.


				elde = tmp;

				if (j == list->size() - 1 && elde != 0) // listenin sonunda carpim sonunda iki basamakli sayi olursa eldeyi sona ekliyor.
				{										                                                 
				
					tutucu->add(elde);
					elde = 0;


				}


			}
			
			
			if (gelenSayi->size() == 1) // sayi tek basamakliysa sadece carpim yapiliyor.
			{
				sonuc->clear();


				for (int j = 0; j < tutucu->size(); j++) // tutucudaki değerler sonuca aktariliyor.
				{
					sonuc->add(tutucu->elementAt(j));
				}

				tutucu->clear();
				
				continue;
			}


			if (k == 0) //ilk deger olarak gelirse islem yapilmadan diger tutucuya aktariliyor.
			{
				for (int j = 0; j < tutucu->size(); j++)
				{
					tutucu1->add(tutucu->elementAt(j));

				}
			}
			else 
			{
				tutucu1->add(sonuc->elementAt(0));

				for (int j = 0; j < tutucu->size(); j++) // carpma isleminden sonra ikinci basamak icin toplama islemi yapiliyor.
				{
					int gelenTutucu = tutucu->elementAt(j);

					if (j + 1 >= sonuc->size())
					{
						tmpToplama = (gelenTutucu  + eldeToplama) / 10;

						atama1 = (gelenTutucu  + eldeToplama) % 10;

						tutucu1->add(atama1);

						eldeToplama = tmpToplama;
					}
					else
					{

						int gelenSonuc = sonuc->elementAt(j + 1);  // burada bir basamak kaydirma islemi var(basamak toplami oldugu icin).

						tmpToplama = (gelenTutucu + gelenSonuc + eldeToplama) / 10;

						atama1 = (gelenTutucu + gelenSonuc + eldeToplama) % 10;

						tutucu1->add(atama1);

						eldeToplama = tmpToplama;


					}



					if (j == tutucu->size() - 1 && eldeToplama != 0) // listenin sonunda toplama islemi sonucunda iki basamakli deger cikarsa.
					{
						tutucu1->add(eldeToplama);
						eldeToplama = 0;


					}



				}
			}



			sonuc->clear();


			for (int j = 0; j < tutucu1->size(); j++) // islem sonucunda tutucudaki degerler sonuca aktariliyor.
			{
				sonuc->add(tutucu1->elementAt(j));
			}




			tutucu1->clear();
			tutucu->clear();

		}

		list->clear();
		


		for (int j = 0; j < sonuc->size(); j++) // ve her turda sayinin revize olmasi için sayi diger listeye aktariliyor.
		{

			list->add(sonuc->elementAt(j));
			
		}

		gelenSayi->clear();
		

	}
	
	if(dosyaYaz.is_open()) // dosya yazma.
	{
		
		
		for (int i = sonuc->size()-1; i >= 0; i--)
		{
			dosyaYaz<<sonuc->elementAt(i);
		
		}
		
		
	}
	else
	{
		cout<<"Dosya Acilamadi.."<<endl;
	}
	
	
	
	delete sonuc;      //Listeler silindi 
	delete gelenSayi;
	delete list;
	delete tutucu;
	delete tutucu1;
	delete sonuc1;
	
	
	dosyaYaz.close(); // dosya kapandi
	
	
	return 0;
}
