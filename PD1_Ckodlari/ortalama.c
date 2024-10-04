#include <stdio.h>
#include <stdlib.h>

int main(){
	int not[2][3];
	//printf("fonksiyondan donen ort degerleri:\n");
	ortalama(not);
	
}

int ortalama(int a[2][3]){
	double toplam[3],ortalama[3];
	int i,j;
	
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d. ogrencinin %d.ders notu:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			toplam[j] += a[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		ortalama[i]=(double)toplam[i]/2;
		printf("%d. dersin ortalamasi %.2lf\n",i+1,ortalama[i]);
	}
	

	
}
