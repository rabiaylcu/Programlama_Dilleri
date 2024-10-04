#include <stdio.h>
#include <math.h>

int faktoriyel(int x){
		
		int i,sonuc=1;
		
		for (i=1;i<=x;i++){
			sonuc*=i;
		}
	
		printf ("%d", sonuc);
		return sonuc;
	}

void main (){
		
	int x,a;
	float seri=0;
	
	printf ("sayi giriniz: ");
	scanf ("%d", x);
	
	for (a=1;a<11;a++){
		seri+=x^a/faktoriyel(a);
	}
	
	printf ("seri sonucunuz: %.2f", seri);

	return 0;
}

