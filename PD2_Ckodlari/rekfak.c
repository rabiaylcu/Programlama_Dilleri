#include<stdio.h>

int faktoriyel_bul(int sayi){
	
	if(sayi>=1){
		return sayi*faktoriyel_bul(sayi-1);
	}
	
	else{
		return 1;
	}
}

int main (){
	
	int x;
	baslangic:
	while (1){
	
	printf ("pozitif sayi giriniz: ");
	scanf ("%d", &x);
	
	if (x<0){
		printf ("pozitif sayi girmelisin..\n");
		goto baslangic;		
	}

	printf ("%d! = %d\n", x, faktoriyel_bul(x));	
		
	}

}
