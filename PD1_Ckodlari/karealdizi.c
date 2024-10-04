#include <stdio.h>
#include <math.h>

int main (){
	
	int n, dizi[n],i;
	
	baslangic:
	
	printf ("dizi max 10 elemanli olabilir 10dan kucuk eleman sayisi giriniz: ");
	scanf ("%d", &n);
	
	if (n>0&&n<11){
		
		for (i=0;i<n;i++){
			printf ("dizinin %d. elemanini giriniz: ", i+1);
			scanf ("%d", &dizi[i]);	
			}
			
		for (i=0;i<n;i++){
			printf ("dizi[%d]nin karesi %d\n", i, dizi[i]*dizi[i]);				
		}
	}
	
	else {
		printf("0-11 arasi eleman sayisi giriniz..\n");
		goto baslangic;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
