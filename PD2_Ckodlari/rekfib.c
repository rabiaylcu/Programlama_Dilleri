#include<stdio.h>

int fib(int n){
	
	if (n==0||n==1){
		return n;
	}
	
	else 
		return fib(n-1)+fib(n-2);
	
}

int main(){
	
	int x,i;
	printf ("kac fib istersin: ");
	scanf ("%d", &x);
	
	for (i=1;i<=x;i++)
		printf ("sayi %d: %d\n", i, fib(i));
	
	return 0;
}
