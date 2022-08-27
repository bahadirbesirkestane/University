#include "Dosya.h"


Dosya dosyaGetir(int kisiSayisi1,int sayiSayisi) // Dosya yapısı 
{
	Dosya dosya=(Dosya)malloc(sizeof(struct DOSYA));
	
	dosya->kisiSayisi1=kisiSayisi1;
	
	dosya->sayiSayisi=sayiSayisi;
	
	dosya->rastgeleSayi=(int*)malloc(sizeof(int)*sayiSayisi);
	
	dosya->kisiler=(Kisi*)malloc(sizeof(Kisi)*kisiSayisi1);
	
	
	
	return dosya;
}

void dosyaOku(Dosya dosya,char* dosyaisim,char* dosyasayi) // Kisiler ve sayiler txt dosyalarını okuyan metot
{
	
	FILE *isimDosyasi; // Dosya işlemleri tanımlamaları
	
	FILE *sayiDosyasi;
	
	char* dosyaAdi=dosyaisim; // parametre olarak gönderilen değerlerin kullanımı.
	
	char * dosyaSayilarAdi=dosyasayi;
	
	
	
	isimDosyasi=fopen(dosyaAdi, "r"); // 2 dosyayı da okuma modunda açtık
	
	sayiDosyasi=fopen(dosyaSayilarAdi,"r");
	
	
	char okunan[3]; // rastgele sayıları çekebilmek için karakter dizisi tanımlaması
	
	
	
    
	
	int sayac=0; // kaç adet sayı olduğunu öğrenmek için sayac
	
	int atama;
	
	int yeniSatir;

    if(sayiDosyasi==NULL)
    {
		printf("Dosya acma hatasi!\n");
        exit(1);
	}
	else
	{
		while(!feof(sayiDosyasi)) // dosyanın sonuna kadar okuma islemi.
		{
			
			
			fgets(okunan,3,sayiDosyasi);
		
			
			atama=atoi(okunan);
			
			if(atama!=0)
			{
				dosya->rastgeleSayi[sayac]=atama;
				
				
				sayac++;
				
			}
			
			
		}
	}	

    
    char isim[100]; // kisiler txt den satirlari çekebilmek için karakter dizisi tanımlaması.
	
	int ch; // okunan satırdaki isim,soyisim,anapara,miktar ve sanslisayi yi ayrı ayrı çekebilmek için int tipi tanımlama.
	int kisiSayisi=0; // kisi sayısı için tanımlama.
	
	int ks=0;
	
	
	
	if (isimDosyasi == NULL) {
      printf("Dosya acma hatasi!\n");
      exit(1);
    }
	else
	{
		
		
		while(!feof(isimDosyasi))
		{
			fgets(isim, 100, isimDosyasi);
			
			kisiSayisi++;
		}
		
		
		
	}	
	
	
    fseek(isimDosyasi, 0, SEEK_SET); // kisi sayısı için dosyanın sonuna gittiği için dosyanın başına gelmesi gerekir.
	
	char name[kisiSayisi][15];         //   
	char surname[kisiSayisi][15];      //
	char anapara[kisiSayisi][15];      //  kişinin her bilgisi için 2 boyutlu karakter dizisi.
	char miktar[kisiSayisi][15];       //
	char sanslisayi[kisiSayisi][15];   // 
	
	char * cumle;
	char * cumle1;
	char * cumle2;
	
	int x;	 // çeşitli işlemler (for dan çıkma , if kontrolü vs. ) için önemsiz değişkenler.
	int y1;
	int a;
	int h;
	
	int yenicumle=1;
	
	if (isimDosyasi == NULL) {
      printf("Dosya açma hatası!\n");
      exit(1);
    }
	else
	{
		
		
		
		while (!feof(isimDosyasi)) 
	    {
			int b=0;
	        int c=0;
			
			
			
			fgets(isim, 100, isimDosyasi);
			
			ch=' '; // kisilerin ismini çekebilmek için karaktere boşluk atadık.
			cumle=strchr(isim, ch); // strchr ile belirlenen karakterin ilk bulunduğu yer işaretleniyor.
			
			
			
			x=strlen(cumle); // cümlenin tamamının büyüklüğünden ,boşluk karakterinden sonraki kısmın büyüklüğü çıkarılıyor.
			y1=strlen(isim); // 
			
			y1=y1-x;
			
			for(int i=0;i<y1;i++)
			{
				
				
				name[ks][i]=isim[i];
				
				if(i==y1-1)
				{
					name[ks][i+1]='\0'; // isim bulunuyor ve sonuna sonlandırma karakteri koyuluyor 
				}
				
			}
			
			
			
			
			
			for(int i=0;i<3;i++) // isim haricindeki bilgiler için okuma karakteri '#' veriliyor 
			{
				ch='#';
				
				cumle1=strchr(cumle+1+c, ch);
			    
				a=strlen(cumle1);
			    b=strlen(cumle+1+c);
			
	            b=b-a;
				
				c=c+b+1;
				
                int tr=0;
				
                for(int y=c-b-1;y<c-1;y++) // soyisim ,anapara,miktar bulunuyor.
			    {
					
					
					if(i==0)
					{
						surname[ks][tr]=cumle[y+1];
						
						if(y==c-2)
						{
							surname[ks][tr+1]='\0';
						}
					}
					else if(i==1)
					{
						anapara[ks][tr]=cumle[y+1];
						
						if(y==c-2)
						{
							anapara[ks][tr+1]='\0';
						}
					}
					else if(i==2)
					{
						miktar[ks][tr]=cumle[y+1];
						
						if(y==c-2)
						{
							miktar[ks][tr+1]='\0';
						}
					}
					
					tr++;
			    }

                 
                

				 
				
				
				if(i==2) // sanslisayi bulunuyor
				{
					cumle2=strrchr(isim,ch);
					
					h=strlen(cumle2);
					
					for(int j=0;j<h;j++)
					{
						
						
						sanslisayi[ks][j]=cumle2[j+1];
						
						if(j==h-1)
						{
							sanslisayi[ks][j+1]='\0';
						}
					}
					
				}
                
				
			   
			}
			
			
			
			
			ks++;
		
        }
		
		
		
	}
	
	
	
	
	int sanslisayix;
	double anaparax;
	double miktarx;
	
	for(int i=0;i<kisiSayisi;i++)  // kişinin bilgileri dosyanın içindeki kisi tipindeki kisiler dizisine aktarılıyor.
	{
		sanslisayix= atoi (sanslisayi[i]); // çeşitli tip dönüşümleri
		
		anaparax=atof(anapara[i]);
		
		miktarx=atof(miktar[i]);
		
		
		dosya->kisiler[i]=KisiGetir(name[i],surname[i],anaparax,miktarx,sanslisayix); // kisi yapısının kurucu niteliğindeki metot
		                                                                              // çağırılıyor.
		                                                                              
	}
	
	
	
	fclose (isimDosyasi); // dosyalar kapanıyor.
	
	fclose(sayiDosyasi);
	
	
	
}

int kisiSayisiBul() // main de parametre olarak verilecek kisisayisi için.
{
	FILE *isimDosyasi; 
	
	
	
	char* dosyaAdi="./Kisiler.txt"; 
	
	
	
	isimDosyasi=fopen(dosyaAdi, "r"); 
	
	
	
	
	char okunan2[100];
	
	
	int kisiSayisi=0;
	
	
	
	if (isimDosyasi == NULL) {
      printf("Dosya acma hatasi!\n");
      exit(1);
    }
	else
	{
		
		
		while(!feof(isimDosyasi))
		{
			fgets(okunan2, 100, isimDosyasi);
			
			kisiSayisi++;
		}
		
		
		
	}	
	
	
    fclose (isimDosyasi); 
	
	
	return kisiSayisi;
	
}

int sayiSayisiBul() //main de parametre olarak verilecek rastgele sayı sayısı için.
{
	FILE *sayiDosyasi;
	
	char * dosyaSayilarAdi="./Sayilar.txt";
	
	sayiDosyasi=fopen(dosyaSayilarAdi,"r");
	
	char okunan[3];
	
	int sayiSayisi=0;
	
	if(sayiDosyasi==NULL)
    {
		printf("Dosya acma hatasi!\n");
        exit(1);
	}
	else
	{
		while(!feof(sayiDosyasi)) 
		{
			
			
			fgets(okunan,3,sayiDosyasi);
		
			
			sayiSayisi++;
			
		}
	}	
	
	fclose(sayiDosyasi);
	
	return sayiSayisi;
	
}

void dosyaYoket(Dosya dosya) // dosya yapısını yok eden metot.
{
	
	if(dosya == NULL) 
	{
		return;
	}
	
	
	for(int i=0;i<dosya->kisiSayisi1;i++) 
	{
		kisiYoket(dosya->kisiler[i]);
	}
	
	free(dosya->rastgeleSayi);
	free(dosya->kisiler);
	
	free(dosya);
}








