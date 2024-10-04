#include <stdio.h>

int main (){
	int a,b,c,enb;
	
	printf ("uc sayi giriniz:\n");
	scanf ("%d %d %d", &a, &b, &c);
	
	enb=a;
	
	if (b>enb){
		enb=b;
	}
	if (c>enb){
		enb=c;
	}
	
	printf ("en buyuk: %d", enb);
	
	return 0;
}
