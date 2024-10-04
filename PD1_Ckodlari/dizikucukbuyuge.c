#include <stdio.h>

main (){
	
	int dizi[10];
	int i, j, gecici;
	
	for (i=0;i<10;i++){
		printf ("dizinin %d. degerini giriniz: ",i+1);
		scanf ("%d", &dizi[i]);
	}
	
	printf ("\ndizinin kucukten buyuge dogru siralanmis hali\n");
	
	for (i=0;i<9;i++){
		
		for (j=i+1;j<10;j++){
			
			if (dizi[j]<dizi[i]){
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
				
			}
		}
	}
	
	for (i=0;i<10;i++){
		printf ("%d\t", dizi[i]);
	}
	
}
