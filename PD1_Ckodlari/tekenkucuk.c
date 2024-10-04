#include <stdio.h>

int main (){
	
	int x,sayi,enk;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &x);
	enk=x;
	
	while (1){
		printf ("sayi giriniz, cikmak icin -1: ");
		scanf ("%d", &sayi);
		
		if (sayi==-1)
			goto bitis;
		
		if (sayi%2!=0){
			if(sayi<enk){
				enk=sayi;
			}	
		}
	}
	
	bitis:
	printf ("en kucuk tek sayi: %d", enk);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
