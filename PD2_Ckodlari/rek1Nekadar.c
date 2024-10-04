#include<stdio.h>

int fonk(int sayi){
	
	if (sayi==0)
		return 0;
		
	fonk(sayi-1);
	printf ("%d\t", sayi);	
}

int main (){
	
	int N;
	printf ("bir sayi giriniz: ");
	scanf ("%d", &N);
	fonk(N);	
	return 0;
}


