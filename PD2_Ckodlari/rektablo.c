//rekürsif çarpým tablosu

#include<stdio.h>

void tablo(x){
	
	int i;
	if (x<=10){
		
		for (i=1;i<11;i++){
			printf ("%-3d", i*x);		
		}
		
		printf ("\n");
		return tablo(x+1);
		
	}
	
	else 
		return 1;
	
}


int main (){
	
	int x=1;
	tablo(x);
	return 0;
}
