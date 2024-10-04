#include<stdio.h>

int ebob (int sayi1, int sayi2){
	
	if (sayi2!=0){
		return ebob(sayi2, sayi1%sayi2);
	}
	
	else {
		return sayi1;
	}
}

int main (){
	
	int x, y;
	printf ("iki sayi giriniz:\n");
	scanf ("%d %d", &x, &y);
	
	printf ("\nEbob: %d", ebob(x,y));
	
	return 0;
}

