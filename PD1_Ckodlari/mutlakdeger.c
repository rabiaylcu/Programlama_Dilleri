#include <stdio.h>
#include <math.h>

int main (){
	int sayi,sonuc;
	
	baslangic:
	printf ("negatif sayi giriniz: ");
	scanf ("%d", &sayi);
	
	if (sayi<0){
		sonuc=sayi*(-1);
		printf("pozitif hali: %d", sonuc);	
	}
	
	else {
		printf ("sayiyi negatif giriniz...\n");
		goto baslangic;
	}
	
	return 0;
}
