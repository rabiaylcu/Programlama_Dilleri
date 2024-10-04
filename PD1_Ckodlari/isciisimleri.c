#include <stdio.h>

void isimleriListele (char isimListesi[][30],int boyut){
	
	int i;
	for (i=0;i<boyut;i++){
		printf ("%s\n", isimListesi[i]);
	}	
}

int main (){
	
	char isciIsimleri[5][30]={"Haydar", "Burcu", "Abdurrahman", "Ayse", "Halil Ibrahim Yavuz"};
	isimleriListele(isciIsimleri,5);
	
	return 0;
}
