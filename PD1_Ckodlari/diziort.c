#include <stdio.h>

int main (){
	
	int adet,i;
	float sayilar[100],toplam=0,ort;
	
	printf ("kac sayinin ortalamasini istersin..: ");
	scanf ("%d", &adet);
	
	while (adet<=0||adet>100){
		printf ("1-100 arasi sayi giriniz..");
		printf ("tekrar kac sayinin ortalamasini istersin..: ");
		scanf ("%d", &adet);
	}
	
	for (i=0;i<adet;i++){
		printf ("lutfen %d. sayiyi giriniz: ",i+1);
		scanf ("%f", &sayilar[i]);
		toplam+=sayilar[i];
	}
	
	ort=toplam/adet;
	
	printf ("girilen sayilarin toplami: %f\n", toplam);
	printf ("girilen sayilarin ortalamasi: %f\n", ort);
	
	return 0;
}
