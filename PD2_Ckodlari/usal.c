//istenen bir sayinin istenen üssünü almak. 

#include<stdio.h>

int usal(int x, int y){
	
	if (y!=1)
		return x*usal(x,y-1);
		
	else 
		return x;
	
	
}

int main (){

	int t, u;	
	printf ("taban ve us  degeri giriniz: \n");
	scanf ("%d %d", &t, &u);	
	
	printf ("sonucunuz: %d", usal(t,u));
	
	return 0;
}


