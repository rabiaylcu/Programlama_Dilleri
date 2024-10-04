#include <stdio.h>

float celcius(float fahrenheit){
	return (fahrenheit-32)/1.8;
}

float fahrenheit (float celcius){
	return celcius*1.8+32;
}

int main (){
	
	float celciusDerece;
	
	printf ("celcius degerini giriniz: ");
	scanf ("%f", &celciusDerece);
	printf ("%.2f celcius %.2f fahrenheit\n\n", celciusDerece, fahrenheit(celciusDerece));
	
	float fahrenheitDerece;
	
	printf ("fahrenheit degerini giriniz: ");
	scanf ("%f", &fahrenheitDerece);
	printf ("%.2f fahrenheit %.2f celcius\n", fahrenheitDerece, celcius(fahrenheitDerece));
	
	
	return 0;
}
