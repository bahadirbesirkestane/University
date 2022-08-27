#include "Kisi.h"


Kisi KisiGetir(char* isim,char * soyisim,double anaPara,double miktar,int sansliSayi) // kişi bilgilerini tutan kisi yapısı 
{
	Kisi yenikisi;
	
	yenikisi= (Kisi)malloc(sizeof(struct KISI));

	yenikisi->isim = strdup(isim);
	yenikisi->soyisim=strdup(soyisim);
	yenikisi->anaPara=anaPara;
	yenikisi->miktar=miktar;
    yenikisi->sansliSayi= sansliSayi;
	
	
	
	
	return yenikisi;
}

void kisiYoket(Kisi yenikisi) // kisi  yapısını yok eden metot.
{
	if(yenikisi==NULL)
	{		
		return;
	}
	
	free(yenikisi->isim);
	free(yenikisi->soyisim);
	free(yenikisi);
}
















