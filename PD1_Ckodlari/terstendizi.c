#include <stdio.h>

int main (){
	
	int i;
	float dizi[10];
	
	for (i=0;i<10;i++){
		printf ("%d. elemanini giriniz: ", i+1);
		scanf ("%f", &dizi[i]);
	}
	
	printf ("\ndizinin ters hali: ");
	float gecici[10];
		
		for (i=0;i<10;i++){
		gecici[i]=dizi[10-1-i];
		printf ("%.2f\t", gecici[i]);
	    }
	
	return 0;
}
