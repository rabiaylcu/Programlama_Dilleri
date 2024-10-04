#include <stdio.h>
#include <math.h>

int main (){
	
	int a,b,s;
	
	printf ("pozitif tam sayi: ");
	scanf ("%d", &s);
	
	for (a=0;a<=s;a++){
		for (b=0;b<=s;b++){
			if (a*a+b*b==s){
				printf ("%d-%d\n",a,b);
			}
		}
	}
	
	return 0;
}
