#ifndef oyun_h
#define oyun_h

#include "Kisi.h"
#include "Dosya.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>


struct OYUN   // Başlık dosyasında Oyun yapısı tanımlaması.
{
	double masaBakiye;
	double zenginBakiye;
	char* zenginisim;
	char* zenginsoyisim;
	
	
};

typedef struct OYUN* Oyun;

Oyun oyunGetir(double masaBakiye,double zenginBakiye,char* zenginisim,char* zenginsoyisim);  // kurucu niteliğindeki metot tanımlaması.

void oyunTest(Oyun oyun,Dosya dosya); // Test eden metot tanımlamsı.

void gotoxy(int x, int y); // sahneyi bastırmak için gerekli metot tanımlaması.

void diyezbas(int c); // sahneyi basarken '#' işareti için tanımlanan metot.

void sahneGetir(Oyun yeniOyun,int sansliSayi,int turSayisi); // sahneyi ekrana basan metot.

void oyunSonu(Oyun yeniOyun,int turSayisi); // oyunun sonundaki sahne için tanımlanan metot.

void oyunYoket(Oyun yeniOyun); // Oyun yapısını yokeden metodun tanımlamsı.


#endif







