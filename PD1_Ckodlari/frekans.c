#include <stdio.h>


int freq(int a[]);
int main(){
	int dizi[10];
	freq(dizi);
	printf("dizi içerisinde aranan sayi %d adet vardýr:\n");
}

int freq(int a[]){
	int freq,i,aranan;
	
	printf("aranan rakami giriniz:\n");
	scanf("%d",&aranan);
	printf("dizinin elemanlarini giriniz:\n");
	for(i=0;i<10;i++){
		printf("%d. elemani gir:",i+1);
		scanf("%d",&a[i]);
		if(a[i]==aranan)
			freq ++;
	}
	return freq;
	
}
