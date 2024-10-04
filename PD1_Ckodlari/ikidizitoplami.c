#include <stdio.h>

int main (){
	
	int dizi[3][4];
	int dizi2[3][4]={0};
	int i,j;
	
	int toplam[3][4];
	
	printf ("1. matrisi giriyorsun..\n");
	
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf ("%d. satir %d. sutundaki elemani giriniz..\n",i+1,j+1);
			scanf ("%d",&dizi[i][j]);
		}	
	}
	
	system ("CLS");
	
	printf ("2. matrisi giriyorsun..\n");
	
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf ("%d. satir %d. sutundaki elemani giriniz..\n",i+1,j+1);
			scanf ("%d",&dizi2[i][j]);
		}	
	}
	
	system ("CLS");
	
	for (i=0;i<3;i++)
		for (j=0;j<4;j++)
			toplam[i][j]=dizi[i][j]+dizi2[i][j];
			
	printf ("2 matrisin toplami:\n");
	for (i=0;i<3;i++){
		for (j=0;j<4;j++)
			printf ("%d ",toplam[i][j]);
		printf ("\n");
	}			
	
	return 0;
}
