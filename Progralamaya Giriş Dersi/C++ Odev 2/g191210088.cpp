#include<iostream>
#include<ctime>
#include<iomanip>
#include <cstring>

using namespace std;

void yaz(int boyut, int dizi[25][25]);			//Matrisi yapan fonksiyon tanimlamasi.
void islemler(char islem);						 //Ýslem blogunu ekrana cikartan program tanýmlamasý.
void islem1(char islem, int boyut, int dizi[25][25], int satir, int sutun, int a);			//Ýslemleri yapan fonksiyon tanýmlamasý.


int main()
{
	int boyut, dizi[25][25];               // Matris dizisi ve boyut tanýmlanýyor.
	int satir = 0, sutun = 0;              // sutun ve satir sayisi tanimlaniyor.
	int a = 0;                             //
	int q = 0;                             // Gerekli sabitler tanimlaniyor.
	int e = 0;                             //

	cout << "Matris boyutunu girin:" << endl;
	cin >> boyut;

	char islem = ('1', '2', '3', '4');     // islem karakterleri secildi.


	while (boyut > 25 || boyut < 5)        // Boyut kosullarý saglaniyor.
	{
		cout << "Matrisin boyutu 5 ile 25 arasi olmali (5 ve 25 dahil)" << endl << endl;
		cout << "Yeni matris boyutunu girin:" << endl;
		cin >> boyut;
	}


	cout << endl;
	srand(time(NULL));   // Her calistirmada farkli deger atamasi.

	for (int i = 0; i < boyut; i++)     // Matris elemanlari ataniyor.
	{
		for (int j = 0; j < boyut; j++)
		{
			dizi[i][j] = rand() % 9 + 1;
		}
	}


	do                    
	{
		yaz(boyut, dizi);     // Matrisi ekrana basan fonksiyon cagýrýlýyor.
		islemler(islem);      // Ýslem blogunu ekrana basan fonksiyon cagýrýlýyor.
		cin >> islem;


		switch (islem)
		{
		case '1':
			islem1(islem, boyut, dizi, satir, sutun, a);
			break;
		case '2':
			islem1(islem, boyut, dizi, satir, sutun, a);
			break;
		case '3':
			islem1(islem, boyut, dizi, satir, sutun, a);
			break;
		case '4':
			islem1(islem, boyut, dizi, satir, sutun, a);
			break;
		default:
			cout << endl << "Hatali islem !..." << endl << endl << "Tekrar girin !.." << endl;

			break;
		}

	} while (a == 0);       // Disaridan yapilan degerlere göre islemler yapiliyor.

	cout << endl;

	yaz(boyut, dizi);       // Matrisi ekrana basan fonksiyon cagýrýlýyor.

	system("pause");
}

void yaz(int boyut, int dizi[25][25])     // Matrisi ekrana basan fonksiyon.
{
	cout << setw(6) << left << " ";

	for (int i = 0; i < boyut; i++)
	{
		cout << setw(5) << left << i + 1;
	}
	cout << endl;

	cout << setw(3) << left << " ";

	for (int i = 0; i < boyut; i++)
	{
		cout << "_____";
	}

	cout << endl << endl;


	for (int i = 0; i < boyut; i++)
	{
		cout << setw(2) << left << i + 1 << " " << "|" << "  ";

		for (int j = 0; j < boyut; j++)
		{
			cout << setw(5) << left << dizi[i][j];
		}
		cout << endl << endl;
	}
}

void islemler(char islem)                 // Ýslem blogunu ekrana basan fonksiyon
{
	cout << "1=)Sutun-satir degistir." << endl << "2=)Tekleri basa al (Satir)." << endl;
	cout << "3=)Ters cevir (sutun)." << endl << "4=)Toplamlari yazdir." << endl;

	cout << "Bir islem seciniz : ";

}

void islem1(char islem, int boyut, int dizi[25][25], int satir, int sutun, int a)       //Ýslemleri yapan fonksiyon.
{
	if (islem == '1')
	{
		int w = 0;

		cout << "Degistirmek istediginiz satir sutun degerini giriniz" << endl << "satir sutun : ";

		cin >> satir >> sutun;
		cout << endl;

		if (satir > boyut || sutun > boyut)
		{
			cout << "Sectiginiz satir ve sutun sayisi matrisin boyutundan buyuk olmamali !" << endl << endl;
		}
		else if (satir < 1 || sutun < 1)
		{
			cout << "Girdiginiz satir sutun sayisi 1 den kucuk olmamali." << endl << endl;
		}
		else
		{
			int sabit = 0;

			int dizi1[25];

			for (int i = 0; i < boyut; i++)
			{
				dizi1[i] = dizi[satir - 1][i];
			}
			for (int i = 0; i < boyut; i++)
			{
				dizi[satir - 1][i] = dizi[i][sutun - 1];
			}

			sabit = dizi[satir - 1][sutun - 1];

			for (int i = 0; i < boyut; i++)
			{
				dizi[i][sutun - 1] = dizi1[i];
			}

			dizi[satir - 1][sutun - 1] = dizi[satir - 1][sutun - 1] + sabit;

			a++;
		}

	}
	if (islem == '2')
	{

		int diziTek[25];
		int diziCift[25];

		cout << "islem yapilacak satiri giriniz: ";
		cin >> satir;
		cout << endl;
		int tek = 0;
		int cift = 0;
		int x = 0;
		int y = 0;

		if (satir > boyut)
		{
			cout << "Satir degeri matris boyutundan buyuk olamaz" << endl;
		}
		else if (satir < 1)
		{
			cout << "Satir degeri matris boyutundan kucuk olamaz" << endl;
		}
		else
		{
			for (int i = 0; i < boyut; i++)
			{

				if (dizi[satir - 1][i] % 2 == 1)
				{
					diziTek[x] = dizi[satir - 1][i];
					tek++;
					x++;
				}
				if (dizi[satir - 1][i] % 2 == 0)
				{
					diziCift[y] = dizi[satir - 1][i];
					cift++;
					y++;
				}
			}
			for (int i = 0; i < tek; i++)
			{

				dizi[satir - 1][i] = diziTek[i];

			}

			for (int i = 0; i < cift; i++)
			{
				dizi[satir - 1][i + tek] = diziCift[i];

			}

			a++;

		}

	}
	if (islem == '3')
	{
		cout << "Ters cevirmek istediginiz sutunu yaziniz : ";
		cin >> sutun;
		cout << endl;

		if (sutun > boyut)
		{
			cout << "Sectiginiz sutun sayisi matrisin boyutundan buyuk olmamali !" << endl << endl;
		}
		else if (sutun < 1)
		{
			cout << "Sectiginiz sutun sayisi matrisin boyutundan kucuk olmamali !";
		}
		else
		{
			int deger = boyut;
			int sabit1 = 0;
			int dizi2[25];

			for (int j = 0; j < boyut; j++)
			{
				dizi2[j] = dizi[boyut - j - 1][sutun - 1];
			}

			for (int i = 0; i < boyut; i++)
			{

				dizi[i][sutun - 1] = dizi2[i];
			}

			a++;
		}

	}
	if (islem == '4')
	{

		int toplam = 0;

		for (int i = 0; i < boyut; i++)
		{
			for (int j = 0; j < boyut; j++)
			{
				toplam = toplam + dizi[i][j];
			}

		}

		for (int i = 0; i < boyut; i++)
		{
			for (int j = 0; j < boyut; j++)
			{
				dizi[i][j] = toplam - dizi[i][j];

				toplam = dizi[i][j];
			}

		}

	}
}
