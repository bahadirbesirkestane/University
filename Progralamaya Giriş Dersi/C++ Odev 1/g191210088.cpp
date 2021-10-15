/***************************************************************************
**
**    Öðrenci Adý Soyadý....:Bahadir Beþir Kestane
**
**    Öðrenci Numarasý....:g191210088
**
**    Ders Grubu....:2. Öðretim - B Grubu
**
**
**************************************************************************/

#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

int main()
{

	int bosluk = 0, bosluk1 = 1;   //Boþluk ve yýldýz sayý deðerleri için deðiken tanýmlanýyor.
	int sutun, satir;    //Satýr ve sutun deðerleri tanýmlanýyor
	int q = 0, p = 0;





	while (p == 0)   //Satir deðerinin koþullarý saðlanýyor
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

	Sleep(100); //Program 100 milisaniye bekleyip baþlýyor

	bosluk = ((sutun - 4) / 2); //Yýldýz ve boþluk deðerlerinin atamasý yapýlýyor


	for (int i = 0; i < sutun; i++) //Sütun sayýsý kadar yýldýz basýyor
	{
		cout << "*";
	}
	Sleep(100);

	for (int j = 0; j < satir - 2; j++)//Girilen satýr sayýsýna eþit olacak þekilde iþlemler yapýlýyor
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

	for (int i = 0; i < sutun; i++)//Dikdörtgenin alt kýsmýný sütun sayýsý kadar basýyor
	{
		cout << "*";
	}
	Sleep(100);

	cout << endl << endl;

	// Yeni atamalar gerçekleþiyor
	bosluk = 1;
	bosluk1 = (sutun - 4);

	for (int i = 0; i < sutun; i++)
	{
		cout << "*";
	}
	Sleep(100);
	for (int j = 0; j < satir - 2; j++)//Alt þekile girilen satýr sayýsýna eþit olacak þekilde iþlemler yapýlýyor
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
	for (int i = 0; i < sutun; i++)//Dikdörtgenin alt kýsmýný sütun sayýsý kadar basýyor
	{
		cout << "*";
	}

	cout << endl;

	system("pause");
}