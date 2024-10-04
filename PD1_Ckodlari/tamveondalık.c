#include <stdio.h>

int main(){
	
	float sayi,sayi3;
	int sayi2;
	
	printf ("ondalikli sayi giriniz: ");
	scanf ("%f", &sayi);
	
	sayi2=sayi;
	printf ("%d\n", sayi2);
	
	sayi3=sayi-sayi2;
	printf ("%.3f", sayi3);	
	
	return 0;
}
