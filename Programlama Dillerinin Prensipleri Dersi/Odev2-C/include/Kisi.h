#ifndef kisi_h
#define kisi_h

#include<stdlib.h>
#include<stdio.h>
#include <string.h>

struct KISI   // Başlık dosyası içindeki kişi yapısı.
{
	
	char * isim;
	char * soyisim;
	double anaPara;
	double miktar;
	int sansliSayi;
	
	
	
};

typedef struct KISI* Kisi;

Kisi KisiGetir(char* isim,char * soyisim,double anaPara,double miktar,int sansliSayi); // Kurucu niteliğindeki metot tanımlaması.

void kisiYoket(Kisi); // Yapı yokedici metodu tanımlaması.


#endif