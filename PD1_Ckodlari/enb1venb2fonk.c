#include <stdio.h>

void enbuyuk(int a[]);
int main(){
	int dizi[10],i;
	
	printf("dizinin elemanlarini giriniz:\n");
	for(i=0;i<10;i++){
		scanf("%d\t",&dizi[i]);
	}
	printf("fonksiyondan donen deger:\n");
	enbuyuk(dizi);	
}

void enbuyuk(int a[]){
	int i;
	int enb=a[0];
	int enb2=a[0];
	
	for(i=0;i<10;i++){    //dizi[5] = {15,0,17,16,20}
		if(a[i]>enb){
			enb2=enb;
			enb=a[i];
		}
		else if(a[i]>enb2)
			enb2=a[i];
	}
	
	printf("en buyuk sayi:%d\n",enb);
	printf("en buyuk ikinci sayi:%d\n",enb2);
	
}
