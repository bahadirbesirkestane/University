
/****************************************************************************
**
**				ÖĞRENCİ ADI........: Bahadır Beşir Kestane
**
**				ÖĞRENCİ NUMARASI...: g191210088
**
**				DERS GRUBU.........:   2B
**
****************************************************************************/

#include<iostream>
#include<Windows.h>
#include<ctime>
#include<stdlib.h>

using namespace std;


struct sahne   //  Sahne yapisi
{
	int dizi1;          // Sahne icin karakter ataması yapılan degisken.
	char karakter;      // Sahnenin karakter secimi icin atanan degisken.
	int c = 0;          // Sahnenin genislik degerleri icin tutulan degisken.
	int genislik[3];    // Sahnenin genislik degerlerini tutan dizi.
	int yukseklik;      // sahnenin yuksekligini tutan degisken.

};

struct lSekli   //L sekli yapisi
{
	int boyut;         // L seklinin boyutu icin atanan degisken.
	int dizi2;         // L sekinin karakter atamasi icin gereken degisken. 
	char karakter1;    // L seklinin karakter icin atanan degisken.
	int x1, y1 = 3;    // L sekli icin koordinat tutucular.
	int w = 0;         // While dongusundan cikmasi için 			   
	int p = 0;         // olusturulan degiskenler    
};


void koordinataGit(int x, int y);    // Koordinat fonksiyonu.

void kursoruGizle();          // Kursoru gizleyen fonksiyon.

void sahneCiz(sahne);         // Sahneciz fonksiyonu.

sahne sahneOlustur(sahne);    // Sahneolustur fonksiyonu.

lSekli lSekliolustur(lSekli); // Lsekliolustur fonksiyonu.

void lSekliCiz(lSekli);       // Lsekliciz fonksiyonu

int main()
{
	sahne olustur;    // Sahne icin olustur isimli yapı degiskeni.
	lSekli lOlustur;  // L sekli icin lOlustur isimli yapi degiskeni.

	kursoruGizle();  // Kursoru gizleyen fonksiyon cagiriliyor.

	olustur = sahneOlustur(olustur);  // Sahne olusturma fonksiyonuna parametre olarak donduruluyor.

	while (1)
	{

		system("cls");       // Ekranı  temizleyen komut.

		sahneCiz(olustur);     // Sahne ciz fonksiyonu cagiriliyor.

		while (lOlustur.p == 0)     // L seklinin kosulları saglanması icin while yardimiyla L sekli olusturuluyor.
		{
			lOlustur = lSekliolustur(lOlustur);
			lOlustur.p++;    // whiledan cikmasi için degiskenin degeri degistiriliyor.
		}



		lSekliCiz(lOlustur);     // L sekli ciz fonksiyonu cagırılıyor.

		lOlustur.y1++;          // L seklinin assagı dogru gitmesi icin döngü her dondugunde 1 artıyor.

		if (lOlustur.y1 >= olustur.yukseklik - lOlustur.boyut - 1)   // L sekli sahe yukseklgine gelince y değerine tekrar 3 atanıyor.
		{
			lOlustur.y1 = 3;
			lOlustur.w = 0;
			lOlustur.p = 0;

		}



		Sleep(100);       // Sleep komutu ile 100 milisaniye beklenmesi saglaniyor.
	}

	
}

sahne sahneOlustur(sahne olustur)   // Sahne olustur fonksiyonu 
{
	olustur.genislik[0] = 30;
	olustur.genislik[1] = 40;       // Genislik degerleri
	olustur.genislik[2] = 50;
	olustur.yukseklik = rand() % 11 + 20;

	srand(time(0));
	olustur.c = rand() % 3;

	olustur.dizi1 = rand() % 5;


	if (olustur.dizi1 == 1)
	{
		olustur.karakter = '*';
	}
	else if (olustur.dizi1 == 2)
	{
		olustur.karakter = '+';
	}
	else if (olustur.dizi1 == 3)
	{
		olustur.karakter = '$';
	}
	else if (olustur.dizi1 == 4)
	{
		olustur.karakter = '@';
	}
	else
	{
		olustur.karakter = '#';
	}
	return olustur;      // Olusturma parametre olarak geri donduruyor.
}
void sahneCiz(sahne olustur)   // Sahne ciz fonksiyonu.
{


	for (int i = 0; i < olustur.genislik[olustur.c]; i++)
	{
		cout << olustur.karakter;

	}

	for (int i = 0; i < olustur.yukseklik; i++)
	{
		koordinataGit(olustur.genislik[olustur.c] - 1, i);
		cout << olustur.karakter;


	}
	for (int i = 0; i < olustur.genislik[olustur.c]; i++)
	{
		koordinataGit(olustur.genislik[olustur.c] - i - 1, olustur.yukseklik - 1);
		cout << olustur.karakter;


	}
	for (int i = 0; i < olustur.yukseklik; i++)
	{
		koordinataGit(0, olustur.yukseklik - i - 1);
		cout << olustur.karakter;


	}


}
lSekli lSekliolustur(lSekli lOlustur)   // Lsekli olusturma fonksiyonu.
{
	srand(time(0));
	lOlustur.dizi2 = rand() % 5;


	if (lOlustur.dizi2 == 0)
	{
		lOlustur.karakter1 = '*';
	}
	else if (lOlustur.dizi2 == 1)
	{
		lOlustur.karakter1 = '#';
	}
	else if (lOlustur.dizi2 == 2)
	{
		lOlustur.karakter1 = '$';
	}
	else if (lOlustur.dizi2 == 3)
	{
		lOlustur.karakter1 = '+';
	}
	else
	{
		lOlustur.karakter1 = '@';
	}


	lOlustur.boyut = rand() % 6 + 2;  // Boyut degerleri atanıyor.

	lOlustur.boyut *= 2;

	while (lOlustur.w == 0)     // L nin gidecegi x degerinin kosullrı saglaniyor.
	{
		lOlustur.x1 = rand() % 21 + 5;
		lOlustur.w++;
	}

	lOlustur.y1 = 3;      // L nin gidecegi y degerine 3 ataniyor.


	return lOlustur;     // L sekli olustur parametresi geri donduruluyor.

}
void lSekliCiz(lSekli lOlustur)   // L sekli cizme fonksiyonu.
{


	for (int i = 0; i < lOlustur.boyut / 2 - 1; i++)
	{
		koordinataGit(lOlustur.x1 + i, lOlustur.y1);

		cout << lOlustur.karakter1;

	}
	for (int i = 0; i < lOlustur.boyut / 2; i++)
	{
		koordinataGit(lOlustur.x1 + lOlustur.boyut / 2 - 1, lOlustur.y1 + i);

		cout << lOlustur.karakter1;

	}
	for (int i = 0; i < lOlustur.boyut / 2; i++)
	{
		koordinataGit(lOlustur.x1 + lOlustur.boyut / 2 + i - 1, lOlustur.y1 + lOlustur.boyut / 2);

		cout << lOlustur.karakter1;

	}

	for (int i = 0; i < lOlustur.boyut / 2; i++)
	{
		koordinataGit(lOlustur.x1 + lOlustur.boyut - 1, lOlustur.y1 + lOlustur.boyut / 2 + i);

		cout << lOlustur.karakter1;

	}

	for (int i = 0; i < lOlustur.boyut - 1; i++)
	{
		koordinataGit(lOlustur.x1 + lOlustur.boyut - i - 1, lOlustur.y1 + lOlustur.boyut);

		cout << lOlustur.karakter1;

	}

	for (int i = 0; i < lOlustur.boyut; i++)
	{
		koordinataGit(lOlustur.x1, lOlustur.y1 + lOlustur.boyut - i);

		cout << lOlustur.karakter1;

	}



}

void koordinataGit(int x, int y)     // Koordinat atama fonksiyonu.
{
	COORD coord;

	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void kursoruGizle()        // Kursor gizleme fonksiyonu 
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO    cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}