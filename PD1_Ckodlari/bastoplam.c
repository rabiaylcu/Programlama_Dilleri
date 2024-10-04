#include <stdio.h>

int main (){
	
	int sayi,rakam,toplam=0;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	while (sayi>0){
		rakam=sayi%10;
		toplam=toplam+rakam;
		sayi=sayi/10;
	}

	printf ("%d", toplam);
	
	return 0;
}
