#include <stdio.h>

int main (){
	int sayi,i,fakt;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	for (i=1;i<=sayi;i++){
		fakt*=i;
	}

	printf ("fakt: %d", fakt);
	return 0;
}
