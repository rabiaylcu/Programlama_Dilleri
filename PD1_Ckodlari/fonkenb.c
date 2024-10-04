#include <stdio.h>

void enBuyukSayi (int dizi[], int boyut){
	
	int enBuyukDeger=dizi[0];
	int i;
	
	for (i=0;i<boyut;i++){
		if (dizi[i]>enBuyukDeger){
			enBuyukDeger=dizi[i];
		}
	}
	
	printf ("En buyuk deger: %d", enBuyukDeger);
	
}

int main (){
	
	int dizi[5],a;
	
	printf ("5 tane dizi elemani gir:\n");	
	
	for (a=0;a<5;a++){
		scanf ("%d", &dizi[a]);
	}
	
	enBuyukSayi(dizi,5);
	
	return 0;
}
