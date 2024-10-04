#include <stdio.h>
#include <math.h>

int main (){
	int i,n,t1=0,t2=0,t3=0;
	
	printf ("bir sayi giriniz: ");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++){
		t1+=i;
		
		if (i%2==0){
			t3+=i;
		}
		else if (i%2!=0){
			t2+=i;
		}
	}
	printf ("t1=%d t2=%d t3=%d",t1,t2,t3);
	
	return 0;
}
