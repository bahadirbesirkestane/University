/***************************************************************************
**
**    ��renci Ad� Soyad�....:Bahadir Be�ir Kestane
**
**    ��renci Numaras�....:g191210088
**
**    Ders Grubu....:2. ��retim - B Grubu
**
**
**************************************************************************/

#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

int main()
{

	int bosluk = 0, bosluk1 = 1;   //Bo�luk ve y�ld�z say� de�erleri i�in de�iken tan�mlan�yor.
	int sutun, satir;    //Sat�r ve sutun de�erleri tan�mlan�yor
	int q = 0, p = 0;





	while (p == 0)   //Satir de�erinin ko�ullar� sa�lan�yor
	{
		cout << "satir degeri giriniz:" << endl;
		cin >> satir;

		if (5 <= satir && satir <= 15)
		{
			cout << "Satir sayisi :" << satir << endl << endl;
			p = 1;
		}
		else
		{
			cout << "satir sayisi 5 ile 15 arasi olmali" << endl << endl << "Tekrar girin" << endl << endl;
		}


	}

	while (q == 0)
	{
		cout << "sutun degeri giriniz:" << endl;
		cin >> sutun;


		if (5 <= sutun && sutun <= 40)
		{
			if (sutun == satir * 2)        //
			{
				cout << "Sutun sayisi :" << sutun << endl;
				q = 1;
			}
			else
			{
				cout << "Sutun sayisi satir sayisinin 2 kati olmali" << endl << endl << "Tekrar girin" << endl << endl;
			}
		}
		else
		{
			cout << "Sutun sayisi 5 ile 40 arasi olmali" << endl << endl << "Tekrar girin" << endl << endl;
		}
	}



	cout << endl;

	Sleep(100); //Program 100 milisaniye bekleyip ba�l�yor

	bosluk = ((sutun - 4) / 2); //Y�ld�z ve bo�luk de�erlerinin atamas� yap�l�yor


	for (int i = 0; i < sutun; i++) //S�tun say�s� kadar y�ld�z bas�yor
	{
		cout << "*";
	}
	Sleep(100);

	for (int j = 0; j < satir - 2; j++)//Girilen sat�r say�s�na e�it olacak �ekilde i�lemler yap�l�yor
	{
		cout << endl;

		cout << "*";

		cout << setw(bosluk) << right << "*";

		for (int j = 0; j < bosluk1; j++)
		{
			cout << " ";
		}

		cout << " " << "*";
		cout << setw(bosluk) << right << "*";



		bosluk = bosluk - 1;

		bosluk1 = bosluk1 + 2;
		Sleep(100);
	}

	cout << endl;

	for (int i = 0; i < sutun; i++)//Dikd�rtgenin alt k�sm�n� s�tun say�s� kadar bas�yor
	{
		cout << "*";
	}
	Sleep(100);

	cout << endl << endl;

	// Yeni atamalar ger�ekle�iyor
	bosluk = 1;
	bosluk1 = (sutun - 4);

	for (int i = 0; i < sutun; i++)
	{
		cout << "*";
	}
	Sleep(100);
	for (int j = 0; j < satir - 2; j++)//Alt �ekile girilen sat�r say�s�na e�it olacak �ekilde i�lemler yap�l�yor
	{

		cout << endl;

		cout << "*";
		cout << setw(bosluk) << right << "*";

		for (int j = 0; j < bosluk1; j++)
		{
			cout << " ";
		}
		cout << "*";

		cout << setw(bosluk) << right << "*";

		bosluk1 = bosluk1 - 2;
		bosluk = bosluk + 1;
		Sleep(100);
	}
	cout << endl;
	Sleep(100);
	for (int i = 0; i < sutun; i++)//Dikd�rtgenin alt k�sm�n� s�tun say�s� kadar bas�yor
	{
		cout << "*";
	}

	cout << endl;

	system("pause");
}