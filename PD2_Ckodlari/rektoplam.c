#include<stdio.h>


	int toplambul(int sayi){
	
		if (sayi!=0){
			return sayi + toplambul(sayi-1);
		}
		
		else 
			return sayi;

	}

	int main(){
	
		int x;
		baslangic:	
		printf ("pozitif bir sayi giriniz: ");
		scanf ("%d", &x);
		
		if (x>0){
			printf ("toplaminiz: %d\n", toplambul(x));			
		}
		
		else{
			printf ("lutfen pozitif sayi giriniz..\n");
			goto baslangic;			
		}
		
	}
