#include <stdio.h>

int main(){
	
	int i,birlerbas,onlarbas,toplam=0;
	
	for (i=0;i<=99;i++){
		birlerbas=i%10;
		onlarbas=i/10;
		toplam=onlarbas+birlerbas;
		if (toplam%2!=0){
			printf ("%d\n", i);
		}
	}
	
	return 0;
}
	
