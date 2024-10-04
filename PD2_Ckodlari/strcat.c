#include<stdio.h>
#include<string.h>

int main (){
	
	char isim[10];
	char meslek[10];
	
	printf ("lutfen isim ve meslek giriniz..\n");
	scanf ("%s %s", isim, meslek);
	
	char kullanici[40]="";
	
	strcat(kullanici,isim);
	strcat(kullanici, " ");
	strcat(kullanici,meslek);
	
	printf ("%s", kullanici);
	
	return 0;
	
}
