#include <stdio.h>
#include <math.h>

int main (){
	
	float dizi[8];
	float toplam=0, ort=0;
	int i;
	

	for (i=0;i<8;i++){
		printf ("dizinin %d. elemanini giriniz: ", i+1);
		scanf ("%f",&dizi[i]);
		
		toplam+=dizi[i];
		ort=toplam/8;		
	}
	
	printf ("ortalama: %f", ort);
	
	return 0;
}
