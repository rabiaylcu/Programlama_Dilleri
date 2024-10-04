#include<stdio.h>
#include<string.h>

int main (){
	
	char mekan[20]= "eyfel kulesi";
	char ulke[20];
	
	strcpy(ulke,mekan);
	
	//printf ("ulkede bulunan mekanlar: %s", ulke);
	
	printf ("ulkede bulunanlar: ");
	
	int i=0;
	while (ulke[i]!='\0'){
		printf("%c", ulke[i]);
		i++;
	}
	
	return 0;
}
