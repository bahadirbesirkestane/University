#include "Oyun.h"


Oyun oyunGetir(double masaBakiye,double zenginBakiye,char* zenginisim,char* zenginsoyisim)
{
	Oyun oyun=(Oyun)malloc(sizeof(struct OYUN));
	
	oyun->masaBakiye=masaBakiye;
	oyun->zenginBakiye=zenginBakiye;
	
	oyun->zenginisim=strdup(zenginisim);
	oyun->zenginsoyisim=strdup(zenginsoyisim);
	
	return oyun;
}

void oyunTest(Oyun oyun,Dosya dosya)  // OYUNU YAPAN METOT
{
	double tutucu=0; // en zengin kişinin bakiyesini tutan değişken.
	int index=0;     // en zengin kişinin indexini tutan değişken.
	double masaBakiye1=0; // masaBakiyesi başlangıç olarak 0.
	
	int kisisayisi=dosya->kisiSayisi1;
	int sayisayisi=dosya->sayiSayisi;
	
	double anaParax; // kod görünümü ve metotların tekrar tekrar çağırılmaması için çeşitli değişkenler.
	double miktarx;
	int sansliSayix;
	int rastgeleSayix;
	
	int i; // i nin forun dışında tanımlanmasının sebebi for bittikten sonra oyun sonu sahnesi için tur sayısını gösteriyor.
	
	for(i=0;i<sayisayisi;i++)
	{
		rastgeleSayix=dosya->rastgeleSayi[i];
		
		for(int j=0;j<kisisayisi;j++) // her tur için kisisayisi defa dönen for döngüsü.
		{
			
			anaParax=dosya->kisiler[j]->anaPara;
			miktarx=dosya->kisiler[j]->miktar;
			sansliSayix=dosya->kisiler[j]->sansliSayi;
			
			if(rastgeleSayix!=sansliSayix) // rastgele sayi ile sansliSayi nın eşit olmama durumu
			{
				masaBakiye1=masaBakiye1+(anaParax * miktarx);
				
				anaParax=anaParax-(anaParax * miktarx);
				
			}
			else
			{
				masaBakiye1=masaBakiye1-(9 * anaParax * miktarx);
				
				anaParax=anaParax+(9 * anaParax * miktarx);
			}
			
			dosya->kisiler[j]->anaPara=anaParax;
			
			if(tutucu < anaParax)// en zengin kişi bulunuyor 
			{
				tutucu=anaParax;
				index=j;
			}
			
			if(anaParax < 1000) // parası 1000 den az olanlar eleniyor
			{
				for(int k=j;k<kisisayisi-1;k++)
				{
					dosya->kisiler[k]=dosya->kisiler[k+1];
					
				}
				
				kisisayisi--;
				j--;
				
			}
			
			
		}
		
		
		oyun=oyunGetir(masaBakiye1,tutucu,dosya->kisiler[index]->isim,dosya->kisiler[index]->soyisim); // oyun yapısındaki değişkenlere-
		                                                                                               // atama yapan metot çağırılıyor.
		sahneGetir(oyun,dosya->rastgeleSayi[i],i+1); // ekranı silip tekrar yeni değerlerle basan metot.
		
		Sleep(25); // her tutda 25 mikrosaniye bekleme yapılıyor.
		
		if(kisisayisi==0) // kisiSayisi 0 olursa oyun bitiyor.
		{
			break;
		}
		
	}
	
	
	
	
	oyunSonu(oyun,i+1); // oyunun son sahnesi için çağırılan metot.
	
}

void gotoxy(int x,int y)    // sahne basımı için cursor koordinat ayarlayan metot.
{
    printf("%c[%d;%df",0x1B,y,x);
}
void diyezbas(int c) // verilen parametre kadar '#' basan metot.
{
	for(int i=0;i<c;i++)
	{
		printf("#");
	}
}

void sahneGetir(Oyun yeniOyun,int sansliSayi,int turSayisi) // sahneyi ekrana basan metot.
{
	
	
	system("cls");
	
	gotoxy(20,6);
	
	diyezbas(45);
	
	gotoxy(20,7);
	
	diyezbas(2);
	
	gotoxy(36,7);
	
	printf("Sansli Sayi: %d",sansliSayi);
	
	gotoxy(63,7);
	
	diyezbas(2);
	
	gotoxy(20,8);
	
	diyezbas(45);
	
	gotoxy(20,9);
	
	diyezbas(45);
	
	int x=20;
	int y=10;
	
	for(int i=0;i<8;i++)
	{
		gotoxy(x,y+i);
		printf("##");
		
		if(i==0)
		{
			gotoxy(36,10);
			printf("TUR: %d",turSayisi);
		}	
		else if(i==1)
		{
			gotoxy(28,11);
			printf("MASA BAKIYE: %.3lf",yeniOyun->masaBakiye);
		}
		else if(i==3)
		{
			gotoxy(22,13);
			for(int i=0;i<41;i++)
			{
				printf("-");
			}
		}
		else if(i==4)
		{
			gotoxy(37,14);
			printf("EN ZENGIN KISI");
		}
		else if(i==5)
		{
			gotoxy(37,15);
			printf("%s %s",yeniOyun->zenginisim,yeniOyun->zenginsoyisim);
		}
		else if(i==6)
		{
			gotoxy(28,16);
			
			printf("BAKIYESI: %.0lf",yeniOyun->zenginBakiye);
		}
		
		gotoxy(x+43,y+i);
		
		printf("##");
		
		
		
	}
	
	
	gotoxy(20,18);
	diyezbas(45);
	
	
	
	
	
	
	
}
void oyunSonu(Oyun yeniOyun,int turSayisi) // oyun sonundaki ekranın basan metot.
{
	system("cls");
	
	gotoxy(20,6);
	
	diyezbas(45);
	
	int x=20;
	int y=7;
	
	for(int i=0;i<8;i++)
	{
		gotoxy(x,y+i);
		printf("##");
		
		if(i==0)
		{
			gotoxy(36,7);
			printf("TUR: %d",turSayisi);
		}	
		else if(i==1)
		{
			gotoxy(28,8);
			printf("MASA BAKIYE: %.3lf",yeniOyun->masaBakiye);
		}
		else if(i==3)
		{
			gotoxy(22,10);
			for(int i=0;i<41;i++)
			{
				printf("-");
			}
		}
		else if(i==4)
		{
			gotoxy(37,11);
			printf("OYUN BITTI");
		}
		
		
		gotoxy(x+43,y+i);
		
		printf("##");
		
		
		
	}
	gotoxy(20,15);
	diyezbas(45);
}
void oyunYoket(Oyun yeniOyun) // oyun yapısını yok eden metot.
{
	if(yeniOyun==NULL)
	{
		return;
	}
	
	free(yeniOyun->zenginisim);
	free(yeniOyun->zenginsoyisim);
	free(yeniOyun);
	
}






