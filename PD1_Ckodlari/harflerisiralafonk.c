#include <stdio.h>
#include <string.h>

void sirala(char []);

int main(){
	char str[20];
	printf("bir metin giriniz:");
	gets(str);
//	fflush(stdin);

	sirala(str);
}

void sirala(char a[]){
	char gecici;
	int i,j,uzunluk=0;
	
	uzunluk = strlen(a);
	
	for (i = 0; i < uzunluk-1; i++) {  //salýha
    	for (j = i+1; j < uzunluk; j++) {
         	if (a[i]>a[j]) {
            	gecici = a[i];
            	a[i] = a[j];
            	a[j] = gecici;
    		}
    	}
	}
	printf("harflerin siralanmis hali :");
	for(i=0;i<16;i++){
		printf("%c",a[i]);
	}
}
