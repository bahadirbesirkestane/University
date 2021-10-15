/****************************************************************************
**
**				ÖÐRENCÝ ADI.....:Bahadýr beþir Kestane
**
**				ÖÐRENCÝ NUMARASI..:G191210088
**
**				DERS GRUBU…………………:2B
**
****************************************************************************/
#include<iostream>
#include<fstream>
#include<sstream>
#include<ctime>
#include<iomanip>
#include<Windows.h>
#include<conio.h>

using namespace std;

char solUstKose = 201;
char duz = 205;
char sagUstKose = 187;
char solAltKose = 200;
char sagAltKose = 188;
char dikey = 186;

void ustYazdir();       //                                        
void altYazdir();       //   Ogrencileri ve sinifleri ekrana çikartan fonksiyonlar.
void yanYazdir();       //
void koordinatAta(int x, int y);   // Koordinat fonksiyonu.



class Ogrenci     
{
private:
	string isim;
	string soyisim;   
	int no;



public:

	
	string  isim1, soyisim1;    // Atama iþlemleri için yapýlan stringler.
	
	int isimR;
	int soyisimR;       //Ogrenciyi isimler ve soyisimler dosyalarindan rastgele bulmasý için deðiþkenler.
	int noR;

	void kurucuOgrenci()   // isimler ve soyisimler dosyalarindan rastgele yeni öðrenci bilgileri yapan fonksiyon.
	{
		
		int c = 0;

		isimR = rand() % 4945 + 1;

		ifstream isimler("isimler.txt", ios::in);

		int sayac = 0;


		while (c==0)    // Rastgele seçilen istenilen yerdeki adi isime aktarýyor.
		{
			isimler >> isim1;

			sayac++;

			if (sayac == isimR)
			{
				isim = isim1;
				c++;
			}

		}

		soyisimR = rand() % 278 + 1;

		ifstream soyisimler("soyisimler.txt", ios::in);
		int sayac1 = 0;
		while (c==1)   // Rastgele seçilen istenilen yerdeki soyadi soyisime aktarýyor.
		{
			soyisimler >> soyisim1;

			sayac1++;

			if (sayac1 == soyisimR)
			{
				soyisim = soyisim1;
				c = 0;
			}
		}

		noR = rand() % 100 + 101;    // Ogrenci numarasini 100-200 arasý rastgele deger atýyor.
		no = noR;

		soyisimler.close();
		isimler.close();

	}
		

};

class Sinif
{
 
public:
	string sinifIsmi;

	int sinifSayisi = 5;     
	int ogrsayisi = 0;
	int e = 0;

	Ogrenci ogr[100];    //Ogrencilerin tututlduðu Ogrenci sinifinin dizisi.
	

	void kurucuSinif()   // A-Z arasý bir harf bulup sayýsýný ve harfi sýnýfIsmi ne aktaran fonksiyon.
	{
		srand(time(NULL));

        char sinifHarf;

		 sinifHarf=rand()%26+65;

		 sinifSayisi++;

		  sinifIsmi = to_string(sinifSayisi);

		  sinifIsmi = sinifIsmi + sinifHarf;

		 
		  
	}

};
class Okul
{

public:

	
	int ogrno;
	int SinifSay=0;   

	int x1 = 0;
	int y1 = 3;

	Sinif kayitlarS[50];   // Siniflari sinif icindeki ogrencilerle birlikte tutan sinif dizisi.
	
	
	void kaydet()         // Kayitlar txt yi okuyup bilgileri sinif dizisine aktaran fonksiyon.
	{
		ifstream kayitOku("kayitlar.txt", ios::in);
		 
		while (!kayitOku.eof())
		{
			
			

			kayitOku >> kayitlarS[SinifSay].sinifIsmi >> kayitlarS[SinifSay].ogrsayisi;

		
			for (int i = 0; i < kayitlarS[SinifSay].ogrsayisi; i++)
			{
				kayitOku >> kayitlarS[SinifSay].ogr[i].isim1 >> kayitlarS[SinifSay].ogr[i].soyisim1 >> kayitlarS[SinifSay].ogr[i].noR;

			}

			SinifSay++;
			
			
		}
		
	
		kayitOku.close();
	}



	void sinifyazdir()     // Sinif dizisindeki siniflari ekrana cýkartan fonksiyon.
	{
		

		for (int g = 0; g <SinifSay; g++)
		{
		
			ustYazdir();
		}

		cout << endl;

		for (int g = 0; g <SinifSay; g++)
		{
			cout << dikey << setw(7) << right << kayitlarS[g].sinifIsmi << setw(8) << right << dikey;
			
		}
		
		cout << endl;

		

			
		for (int g = 0; g <SinifSay; g++)
		{

			altYazdir();
		}
		cout << endl;

	}
	void ogrenciyazdir()    // Sinif dizisindeki siniflerin içindeki ogrencileri ekrana cikartan fonksiyon.
	{
		
		int a = 0;
		for (int j =0; j < SinifSay; j++)
		{
			

			for (int i = 0; i < kayitlarS[j].ogrsayisi; i++)
			{
				koordinatAta(x1, y1);

				if (kayitlarS[j].ogrsayisi == 0)
				{
					cout << setw(16) << right << " ";
					cout << endl;
				}
				else
				{


					ustYazdir();

					koordinatAta(x1, y1+1);

					cout << dikey << setw(14) << right << kayitlarS[j].ogr[i].isim1 << dikey;

					koordinatAta(x1, y1 +2);
					cout << dikey << setw(14) << right << kayitlarS[j].ogr[i].soyisim1 << dikey;
					koordinatAta(x1, y1+3);
					cout << dikey << setw(14) << right << kayitlarS[j].ogr[i].noR << dikey;
					koordinatAta(x1, y1+4);
					altYazdir();

					y1 += 5; 

				}
				
				
				
			}

			
			y1 = 3;
			

			x1 = x1 + 16;
			
		}

		
		
		
		

	}

	
	
};
class DosyaYonetim
{

public:
	
	

};
class Program
{
public:

	

	void calistir()    // Programi calistiran fonksiyon.
	{
		Sinif s;      
		srand(time(0));
		int u = 0;
		do
		{
			Okul o;

			Ogrenci g;

			system("cls"); 

			o.kaydet();

			o.sinifyazdir();
			o.ogrenciyazdir();





			cout << endl << endl;
			if (o.kayitlarS[0].ogrsayisi >= o.kayitlarS[1].ogrsayisi)
			{
				koordinatAta(0, o.kayitlarS[0].ogrsayisi * 6);
			}
			else
			{
				koordinatAta(0, o.kayitlarS[1].ogrsayisi * 6);

			}
			

			cout << "1. Ogrenci Ekle . "<< endl << "2. Sinif Ekle. " << endl << "3. Ogrenci Degistir." << endl
				<< "4. Ogrenci sil" << endl << "5. Sinif sil" << endl << "6. Cikis " << endl;
			char islem1;
			cout << "islem seciniz : ";
			cin >> islem1;
			cout << endl;

			if (islem1 == '1')   // Ogrenci ekleme islemleri.
			{
				

				string sinifsec;
				
				cout << "Ogrenci eklenecek sinif : ";
				cin >> sinifsec;
				cout << endl;

				for (int t = 0; t < o.SinifSay; t++)
				{
					if (sinifsec == o.kayitlarS[t].sinifIsmi)    // Disaridan girilen sinifa yeni ogrenciyi kaydediyoyor.
					{
						g.kurucuOgrenci();

						o.kayitlarS[t].ogr[o.kayitlarS[t].ogrsayisi].isim1=g.isim1;
						o.kayitlarS[t].ogr[o.kayitlarS[t].ogrsayisi].soyisim1=g.soyisim1;
						o.kayitlarS[t].ogr[o.kayitlarS[t].ogrsayisi].noR=g.noR;

						
						o.kayitlarS[t].ogrsayisi++;

						

						

						
						ofstream kayitlar;

						kayitlar.open("kayitlar.txt", ios::out);

						for (int i = 0; i < o.SinifSay; i++)     // Yeni ogrenciyi kayitlar dosyasina kaydediyor.
						{
							
							if (o.kayitlarS[i].ogrsayisi != 0)
							{
								
								kayitlar <<endl<< o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;

								for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
								{
									kayitlar << endl<< o.kayitlarS[i].ogr[j].isim1 << " " << o.kayitlarS[i].ogr[j].soyisim1 << " " << o.kayitlarS[i].ogr[j].noR;
								}
							}
							else
							{
								kayitlar <<endl<< o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;
							}

						}


						kayitlar.close();

					}
					
					
				}
				
				cout << "Ogrenci ismi : " << g.isim1 << endl << "Ogrenci soyadi : " << g.soyisim1 << endl << "Ogrenci numara : " << g.noR;
				
				_getch();    // Herhangi birtusa basincaya kadar bekliyor.
				
			}
			else if(islem1=='2')      // Sinif ekleme islemleri.
			{

				s.kurucuSinif();       // Yeni sinif olusturuyor.

				o.kayitlarS[o.SinifSay].sinifIsmi = s.sinifIsmi;

				o.kayitlarS[o.SinifSay].ogrsayisi = 0;




				ofstream kayitlar;

				kayitlar.open("kayitlar.txt", ios::out);

				for (int i = 0; i < s.sinifSayisi; i++)       // Yeni sinifi Kayitlar dosyasina kaydediyor.
				{
					if (o.kayitlarS[i].ogrsayisi != 0)
					{
						

						kayitlar <<endl<< o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;

						for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
						{
							kayitlar <<endl<< o.kayitlarS[i].ogr[j].isim1 << " " << o.kayitlarS[i].ogr[j].soyisim1 << " " << o.kayitlarS[i].ogr[j].noR;
						}
					}
					else
					{
						kayitlar <<endl<< o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;
					}

				}

				
				kayitlar.close();
				
			}
			else if (islem1 == '3')       // Ogrenci degistirme islemleri.
			{
				int ogrdegisim;

				cout << "Ogrenci no : ";
				cin >> ogrdegisim;
				cout << endl;

				for (int i = 0; i < o.SinifSay; i++)     
				{
					for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
					{
						if (o.kayitlarS[i].ogr[j].noR == ogrdegisim)
						{
							g.kurucuOgrenci();     // Yeni ogrenci getiriyor.

							o.kayitlarS[i].ogr[j].isim1 = g.isim1;
							o.kayitlarS[i].ogr[j].soyisim1 = g.soyisim1;  // Ogrenciyi degistirmek istenilien ogrenciyle degistiriyor.
							o.kayitlarS[i].ogr[j].noR = g.noR;

							cout << "Ogrenci Adi : " << g.isim1 << endl << "Ogrenci Soyadi : " << g.soyisim1 << endl << "Ogrenci No : " << g.noR << endl;

							_getch();   
						}
					}
				}

				
				ofstream kayitlar;

				kayitlar.open("kayitlar.txt", ios::out);

				for (int i = 0; i < o.SinifSay; i++)    // Kayitlar dosyayýsýna degistirilen ogrenciyle birlikte yaziyor.
				{

					if (o.kayitlarS[i].ogrsayisi != 0)
					{



						kayitlar << endl << o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;

						for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
						{
							kayitlar << endl << o.kayitlarS[i].ogr[j].isim1 << " " << o.kayitlarS[i].ogr[j].soyisim1 << " " << o.kayitlarS[i].ogr[j].noR;
						}
					}
					else
					{
						kayitlar << endl << o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;
					}

				}


				kayitlar.close();

				
			}
			else if (islem1 == '4')     // ogrenci silme islemleri.
			{
				int ogrsil;
				cout << "Ogrenci no : ";
				cin >> ogrsil;
				cout << endl;

				

				for (int i = 0; i < o.SinifSay; i++)
				{
					for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
					{
						if (o.kayitlarS[i].ogr[j].noR == ogrsil)    // Disaridan girilen ogrenciyi bir sonraki ogrenci ile degistiriyor ve o sinifa ait ogrenci sayisini azaltiyor.
						{
						
							for (int k = j; k < o.kayitlarS[i].ogrsayisi - 1; k++)
							{


								o.kayitlarS[i].ogr[k].isim1 = o.kayitlarS[i].ogr[k + 1].isim1;
								o.kayitlarS[i].ogr[k].soyisim1 = o.kayitlarS[i].ogr[k + 1].soyisim1;
								o.kayitlarS[i].ogr[k].noR = o.kayitlarS[i].ogr[k + 1].noR;


							}
							o.kayitlarS[i].ogrsayisi--;

						}
					}

				}

				

				ofstream kayitlar;

				kayitlar.open("kayitlar.txt", ios::out);

				for (int i = 0; i < o.SinifSay; i++)     // Yeni kayitlari kayitlar dosyasina kaydediyor.
				{

					if (o.kayitlarS[i].ogrsayisi != 0)
					{



						kayitlar << endl << o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;

						for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
						{
							kayitlar << endl << o.kayitlarS[i].ogr[j].isim1 << " " << o.kayitlarS[i].ogr[j].soyisim1 << " " << o.kayitlarS[i].ogr[j].noR;
						}
					}
					else
					{
						kayitlar << endl << o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;
					}

				}


				kayitlar.close();

			}
			else if (islem1 == '5')    // Sinif silme islemleri.
			{
				string sinifsil;

				cout << "Sinif Adi : ";
				cin >> sinifsil;
				cout << endl;

				for (int i = 0; i < o.SinifSay; i++)   // Disaridan girilen sinifi döngü ile bir sonraki sinif ile degistiriyor ve sinif sayisi azalýyor.
				{
					if (o.kayitlarS[i].sinifIsmi == sinifsil)
					{
						for (int k = i; k < o.SinifSay -1; k++)
						{
							o.kayitlarS[k] = o.kayitlarS[k + 1];

						}


					}
					

				}

				o.SinifSay--;

				ofstream kayitlar;

				kayitlar.open("kayitlar.txt", ios::out);

				for (int i = 0; i < o.SinifSay; i++)      // Yeni kayitlari kayitlar dosyasina kaydediyor.
				{

					if (o.kayitlarS[i].ogrsayisi != 0)
					{



						kayitlar << endl << o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;

						for (int j = 0; j < o.kayitlarS[i].ogrsayisi; j++)
						{
							kayitlar << endl << o.kayitlarS[i].ogr[j].isim1 << " " << o.kayitlarS[i].ogr[j].soyisim1 << " " << o.kayitlarS[i].ogr[j].noR;
						}
					}
					else
					{
						kayitlar << endl << o.kayitlarS[i].sinifIsmi << endl << o.kayitlarS[i].ogrsayisi;
					}

				}


				kayitlar.close();
				
			}
			else if(islem1=='6')
			{
				u = 1;
			}
			else
			{
				u = 0;
			}

		} while (u==0);

		
	}
};


int main()
{
	Program prog;

	prog.calistir();
	
	
}


void ustYazdir()
{

	cout << solUstKose;
	for (int i = 0; i < 14; i++)
	{
		cout << duz;
	}
	cout << sagUstKose;
}
void yanYazdir()
{
	
	cout << dikey;

	
}

void altYazdir()
{
	cout << solAltKose;
	for (int i = 0; i <14; i++)
	{
		cout << duz;
	}
	cout << sagAltKose;
}

void koordinatAta(int x, int y)    
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

