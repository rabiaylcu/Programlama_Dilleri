#include <stdio.h>

int main (){
	int sayi,toplam,bas,ilksayi;
	char karakter;
	
	baslangic:
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	ilksayi=sayi;
	
	toplam=0;
	
	while (sayi>0){
		bas=sayi%10;
		toplam=(toplam*10)+bas;
		sayi=sayi/10;	
	}
	
	printf ("%d ", toplam);
	
	if (ilksayi==toplam&&ilksayi!=2&&ilksayi!=3&&ilksayi!=5&&ilksayi!=6&&ilksayi!=7&&ilksayi!=9){
		printf ("palinromik sayi..\n");
	}
	
	else{
		printf ("palindromik degil..\n");
	}
	
	printf ("devam mi? [E/e]: ");
	scanf (" %c", &karakter);
	
	if ("karakter=='e'||karakter=='E'"){
		goto baslangic;
	}
	
	return 0;
}
	
