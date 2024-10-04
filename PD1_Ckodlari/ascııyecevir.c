#include <stdio.h>

int main (){
	
	int sayi;
	char karakter;
	
	baslangic:
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	if (sayi>0&&sayi<255){
		karakter=sayi;
		printf ("%c", karakter);
	}
	
	else {
		printf ("0-255 arasi sayi giriniz..\n");
		goto baslangic;
	}
	
	return 0;
}
