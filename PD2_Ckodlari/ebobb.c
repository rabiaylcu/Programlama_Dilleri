#include<stdio.h>

int ebob(int x, int y){
	
	if (x%y>0)
		return ebob(y, x%y);
		
	else 
		return y;
}

int main (){
	
	int a, b;
	printf ("ebobunu bulmak ist iki sayi gir:\n");
	scanf ("%d %d", &a, &b);
	printf ("ebob= %d", ebob(a,b));
	return 0;
	
}
