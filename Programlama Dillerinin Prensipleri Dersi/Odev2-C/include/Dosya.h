#ifndef dosya_h
#define dosya_h

#include "Kisi.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>



struct DOSYA  // Başlık dosyasında dosya yapısı tanımlaması. 
{
	int kisiSayisi1;
	
	int sayiSayisi;
	
	int * rastgeleSayi;
	
	Kisi* kisiler;
	
	
	  	
};

typedef struct DOSYA* Dosya; // yapının tip adı tanımlaması.

Dosya dosyaGetir(int kisiSayisi1,int sayiSayisi); // kurucu niteliğindeki metot tanımlaması.

void dosyaOku(Dosya dosya,char* dosyaisim,char* dosyasayi); // dosyalari okuyan metodun tanımlamsı.

int kisiSayisiBul();

int sayiSayisiBul();

void dosyaYoket(Dosya dosya); // dosya yapısını yokeden metodun tanımlamsı.



#endif