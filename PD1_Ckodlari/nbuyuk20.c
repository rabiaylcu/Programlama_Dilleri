#include <stdio.h>

int main (){
	int n,i,toplam=0,j,tc=0,k,ct=0;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &n);
	
	if (n>20){
		for (i=10;i<n;i++){
			toplam+=i;
		}
		
		for(j=5;j<n;j++){
			if (j%2!=0){
				tc+=j;
			}
		}
		
		for (k=14;k<n;k++){
			if (k%2==0){
				ct+=k;	
			}
		}
	}
	
	printf ("%d %d %d", toplam,tc,ct);
	
	return 0;
}
