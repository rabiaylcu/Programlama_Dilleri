#include <stdio.h>
#define saatiSoyle(karakter) (karakter=='E'||karakter=='e') ? __TIME__ : "kullanici saati ogrenmek istemiyor"

int main (){
	
	char karakter;
	printf ("saati ogrenmek ister misin?\n");
	scanf ("%c", &karakter);
	
	if (saatiSoyle(karakter)){
		printf ("%s", saatiSoyle(karakter));
	}
	
	else{
		printf ("%s", saatiSoyle(karakter));	
	}
	
	return 0;
}

