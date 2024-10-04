#include <stdio.h>
#include <math.h>

int main (){
	int a,b,c;
	float x1,x2,delta;
	
	printf ("a,b,c degerlerini giriniz:\n");
	scanf ("%d%d%d", &a,&b,&c);
	
	delta=(b*b)-(4*a*c);
	delta=sqrt(delta);
	
	if (delta>0){
		x1=((-b)+(delta))/2*a;
		x2=((-b)-(delta))/2*a;
	}
	else if (delta==0){
		x1=x2=(-b)/2*a;
	}
	else if (delta<0){
		printf ("kokler sanaldir\n");
	}
	
	printf ("x1=%.2f, x2=%.2f", x1,x2);
	
	return 0;
}
