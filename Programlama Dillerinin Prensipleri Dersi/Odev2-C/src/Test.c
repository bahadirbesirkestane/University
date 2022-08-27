#include "Dosya.h"
#include "Oyun.h"
#include "Kisi.h"

int main()
{
	
	
	
	char * dosyaKisilerAdi="./Kisiler.txt"; 
	
	char * dosyaSayilarAdi="./Sayilar.txt";
	
	int kisiSayisi=kisiSayisiBul();
	
	int sayiSayisi=sayiSayisiBul();
	
	
	Dosya yeniDosya = dosyaGetir(kisiSayisi,sayiSayisi); // kurucu niteliğindeki dosya yapısındaki metot çağırılıyor.

	dosyaOku(yeniDosya,dosyaKisilerAdi,dosyaSayilarAdi); // dosya okuma ve kisilerin bilgileri "Kisi" tipinde dizi olarak tutuluyor.
	
	Oyun yeniOyun;
	
	oyunTest(yeniOyun,yeniDosya); // oyun testi için oyun dosyasındaki test eden metot çağırılıyor.
	
	dosyaYoket(yeniDosya); // dosya ve içindeki kisi yapısı yok ediliyor.
	
	oyunYoket(yeniOyun); // oyun yapısı yok ediliyor.
	
}

