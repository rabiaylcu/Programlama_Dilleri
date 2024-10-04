#include <stdio.h>

int main (){
	
	char sifre[60];
	char sifreDogrulama[60];
	
	int i=0,yanlis=0;
	
	while(1){
		printf ("sifrenizi giriniz..\n");
		scanf ("%s", sifre);
		
		printf ("sifrenizi tekrar giriniz..\n");
		scanf ("%s", sifreDogrulama);
		
		while (!(sifre[i]=='\0' && sifreDogrulama[i]=='\0')){
			if (sifre[i]!=sifreDogrulama[i]){
				printf ("hatali giris, 1. ve 2. sifrenizi ayni giriniz...\n");
				yanlis=1;
				break;
			}
			else {
				i++;
			}
		}
		
		if (yanlis==0){
			printf ("sifreleriniz esit...\n");
			break;
		}
		
	}
	
	return 0;
}
