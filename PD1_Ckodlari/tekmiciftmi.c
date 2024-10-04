#include <stdio.h>

int tekCiftKontrol (int sayi){
	
	if (sayi%2==0){
		return 0;
	}
	else {
		return 1;
	}	
}

int main (){
	
	int sayi;
	
	while (1){
		
		printf ("tek mi cift mi ogrenmek istediginiz sayiyi giriniz, cikmak icin -1:\n");
		scanf ("%d", &sayi);
		
		if (sayi==-1)
			break;
		
		if (tekCiftKontrol(sayi)==1){
			printf ("sayi tektir");
		}
		else {
			printf ("sayi cifttir");
		}	
		
	}

	
	return 0;
}
