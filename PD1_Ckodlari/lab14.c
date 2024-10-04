#include <stdio.h>

int sayiKontrol (int sayi){

	int a = sayi % 10;
	sayi /= 10;
	while (sayi > 0){
		if (a!=sayi%10){
			return 0;			
		}
		
		sayi /= 10;
	}
		
		return 1;
}
	
	int main (){
	
	int i;
	int A[10]={332,455,144,777,81,999999,36,90,88,11};
	
	for (i=0;i<10;i++){
		
		if (sayiKontrol(A[i])){
			printf ("%d sayisinin tum basamaklari esit\n", A[i]);
		}
		else {
			printf ("%d sayisinin basamaklari esit degil\n", A[i]);
		}
	}
	
	
	return 0;
}
	

	
	


