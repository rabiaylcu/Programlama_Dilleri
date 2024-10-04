#include<stdio.h>

int fak(int sayi){
	
	if (sayi<=1)
		return 1;
		
	else 
		return (sayi*fak(sayi-1));
	
	
}

int main (){
	
	int x;
	printf ("sayi giriniz: ");
	scanf ("%d", &x);
	printf ("sonuc: %d", fak(x));
	return 0;
}
