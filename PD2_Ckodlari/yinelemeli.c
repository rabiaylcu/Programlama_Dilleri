#include<stdio.h>

	int faktoriyel(int sayi){
		
	int i, sonuc=1;
	for (i=0;i<sayi;i++)
		sonuc=sonuc*(i+1);
		
	return sonuc;		
	}
	
	int main (){
		printf ("%d", faktoriyel(5));
	}
