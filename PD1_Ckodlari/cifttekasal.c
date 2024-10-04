#include <stdio.h>
#include <math.h>

int main (){
	int sayi,i,j,temp;
	
	printf ("10 sayi giriniz:\n");
	
	for (i=0;i<10;i++){
		scanf ("%d",&sayi);
		if (sayi%2==0){
			printf ("cift\n");
		}
		else {
			printf ("tek\n");
		}
		
		temp=0;
		
		for (j=2;j<sayi;j++){
			if (sayi%j==0){
				temp++;	
			}
			
		}
		
		if (temp==0&&sayi!=0){
			printf ("asal\n");	
			}
	}
	
	return 0;
}
