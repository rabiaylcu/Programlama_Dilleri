#include<stdio.h>

int toplambul(int sayi){
	
	if (sayi==0)
		return sayi;
		
	else 
		return (sayi+toplambul(sayi-1));

}

int main (){
	
	int N;
	printf ("bir sayi giriniz: ");
	scanf ("%d", &N);
	printf ("sonuc: %d", toplambul(N));

	return 0;
} 
