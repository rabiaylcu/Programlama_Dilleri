#include<stdio.h>
int main(){
	int sayi,i=0,toplam=0,ortalama;
	printf("tek sayi giriniz.cift girersen biter\n");
	do{
		scanf("%d",&sayi);
		if(sayi%2!=0){
			toplam+=sayi;
			i++;
		}
		
	}while(sayi%2!=0);
	
	ortalama=toplam/i;
	
	printf("girilen tek sayilarin ortalamasi= %d",ortalama);
	
	return 0;
}
