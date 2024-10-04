#include <stdio.h>

int main (){
	int sayi,i=0;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	printf ("bolen sayilar:\n");
	
	for (i=1;i<=sayi;i++){
		if (sayi%i==0){
			printf ("%d\t", i);
		}
	}
	
	return 0;
}
