#include <stdio.h>
#include <math.h>

int main (){
	
	int i,j,fakt=1,n,x;
	float toplam=1,a;
	
	printf ("bitis degeri ve x degeri giriniz:\n");
	scanf ("%d %d", &n, &x);
	
	for (i=0;i<=n;i++){
		
		for (j=1;j<=i;j++){
			fakt*=j;
		}
		a=i/fakt;
		toplam+=pow(x,a);	
	}
	printf ("toplam= %f", toplam);
	
	return 0;
}
