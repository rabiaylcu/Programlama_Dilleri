#include <stdio.h>

int main (){
	int a,b,c;
	
	printf ("uc sayi giriniz\n");
	scanf ("%d %d %d", &a, &b, &c);
	printf ("\n");
	
	if (a>b && a>c && c<b)
	printf ("%d %d %d", a, b, c);
	
	else if (a>b && a>c && c>b)
	printf ("%d %d %d", a, c, b);
	
	else if (a<b && b>c && c<a)
	printf ("%d %d %d", b, a, c);
	
	else if (a<b && b>c && a<c)
	printf ("%d %d %d", b, c, a);
	
	else if (b>a && a<c && c>b)
	printf ("%d %d %d", c, b, a);
	
	else if (a<c && c>b && b<a)
	printf ("%d %d %d", c, a, b);
		
	return 0;
}


