#include <stdio.h>

void sesli(char []);

int main(){
	char kelime[100];
	printf("kelime giriniz:");
	gets(kelime);
	//fflush(stdin);
	sesli(kelime);
}

void sesli(char a[]){
	int uzunluk,i,sayac = 0;
	char harf;
	
	uzunluk=strlen(a);
	for(i=0; i<uzunluk; i++){
		harf = a[i];
		
		if(harf>='a' && harf<='z'){  //kucuk gelse de buyuk harfe cevirecek
			harf = harf - 32;
		
		}
			
		if(harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
			sayac ++;
	}
	
	printf("%s kelimesinde %d tane sesli harf var",a,sayac);
}
