#include <stdio.h>
#include <math.h>

int main (){
	int sayi1,sayi2,secim;
	char karakter;
	
	baslangic:
	printf ("iki sayi giriniz:\n");
	scanf ("%d %d", &sayi1, &sayi2);
	
	printf ("yapmak istediginiz islemi seciniz\n");
	printf ("1-topla\n2-cikar\n3-carp\n4-bol\nsecim:");
	scanf ("%d", &secim);
	
	switch (secim){
		case 1: 
			printf ("toplaminiz: %d\n", sayi1+sayi2);
			break;
			
		case 2: 
			
			if (sayi1>sayi2){
			printf ("sonucunuz: %d\n", sayi1-sayi2);
			}
			else {
			printf ("sonucunuz: %d\n", sayi2-sayi1);	
			}
			break;
			
		case 3:
			printf ("carpim sonucunuz: %d\n", sayi1*sayi2);
			break;
			
		case 4:
			printf ("bolum sonucunuz: %d\n", sayi1/sayi2);
			break;
			
		default:
			printf ("lutfen 1-4 arasi secim yapiniz..\n");
			goto baslangic;
	}
	
	printf ("devam etmek istiyor musun? [E/e]: ");
	scanf (" %c", &karakter);
	
	if (karakter == 'e'|| karakter == 'E'){
		goto baslangic;
	}

	return 0;
}
