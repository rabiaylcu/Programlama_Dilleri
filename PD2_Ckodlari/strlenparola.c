#include<stdio.h>
#include<string.h>

int main (){
	
	char parola[50];
	int i;
	printf ("parolanizi giriniz:\n");
	gets (parola);
	
	if (strlen(parola)>=10){
		for(i=0;i<strlen(parola);i++){
			printf("*");
		}
		printf (" parolaniz olusturuldu\n");
	}
	
	else {
		printf ("parolaniz saglam degil..\n");
	}
	
	return 0;
		
}
