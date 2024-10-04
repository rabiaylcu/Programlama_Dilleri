#include <stdio.h>

int asalMi(int sayi){
	
	int i;
	
	for (i=2;i<=sayi/2;i++){
		if (sayi%i==0){
			return 0;
		}
	}
	
	return 1;
}

int main (){
	
	int i;
	
	for (i=2;i<=1000;i++){
		if (asalMi(i)==1){
			printf ("%d asaldir..\n",i);
		}
	}	
	
	return 0;
	
}
