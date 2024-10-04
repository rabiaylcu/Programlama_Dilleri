#include<stdio.h>
#include<string.h>

int main (){
	
	/*char isim[]="mühendis hanim!";
	printf ("%d", strlen(isim));*/
	
	char isim[50];
	printf ("lutfen bir kelime giriniz..\n");
	gets(isim);
	printf ("\n");
	
	//int uzunluk= strlen(isim);
	//printf ("\"%s\" uzunlugu : %d", isim, uzunluk);
	
	int i;
	for (i=0; i<strlen(isim); i++){
		printf ("%c", isim[i]);
	}
	
	printf ("\n");
	
	for (i=strlen(isim)-1; i>=0;i--){
		printf ("%c", isim[i]);
	}
	
	return 0;
}
