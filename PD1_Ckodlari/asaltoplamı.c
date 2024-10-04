#include <stdio.h>

int main (){
	
	int i,flag=0,sayi,a,b,orj,temp=0;
	
	while(1){
		
	printf ("iki basamakli cift sayi (cikmak icin -1): ");
	scanf ("%d", &sayi);
	
	if (sayi==-1)
		break;
	
	orj=sayi;
	
	if (sayi>0&&sayi<99&&sayi%2==0){
		
		printf ("sayi girin: ");
		scanf ("%d",&a);
		
		for (i=2;i<a;i++){
			if (a%i==0){
				temp+=1;
			}
		}
		
		if (temp==0){
			
			b=sayi-a;
		
			for (i=2;i<b;i++){
				if (b%i==0){
					flag+=1;
				}
			}
		
			if (flag==0)
				printf ("%d+%d=%d\n", a,b,orj);
			
		
			else 
				printf ("ikinci sayi asal degildir..");
		
			}

		else
			printf ("birinci sayi asal degil.tekrar dene");

	}
		
		else {
			printf ("sayi yanlis..");
		}
		
		
	}
	
	return 0;
}
