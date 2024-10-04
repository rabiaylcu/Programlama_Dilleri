#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

double AritmetikOrtalama(int dizi[],int elemanSayisi)
{
	int i;
	double toplam=0;
	for(i=0;i<elemanSayisi;i++)
	{
		toplam+=dizi[i];
	}
	return toplam/elemanSayisi;
}


double Geometrik(int dizi[],int elemanSayisi)
{
 	int i;
 	double toplam=1;
 	for(i=0;i<elemanSayisi;i++)
 	{
 		toplam*=(double)dizi[i];
 	}
 	printf("Toplam: %.2lf eleman sayisi: %.2lf\n",toplam,(1/(double)elemanSayisi));
 	return pow(toplam,(1/(double)elemanSayisi));
}


double Harmonik(int dizi[],int elemanSayisi)
{
 	int i;
 	double toplam=0;
 	for(i=0;i<elemanSayisi;i++)
 	{
 		toplam += 1/(double)dizi[i];
 	}
 	return (double)elemanSayisi/toplam;
}

double OrtalamaHesapla(int dizi[],int elemanSayisi, int yontem)
{
 	switch(yontem)
 	{
 	case 1:
 		return AritmetikOrtalama(dizi,elemanSayisi);
 		break;
 	case 2:
 		return Geometrik(dizi,elemanSayisi);
 		break;
 	case 3:
 		return Harmonik(dizi,elemanSayisi);
 		break;
 	default:
 	printf("Hatali Giris.\n");
 	return -1;
 	break;
 	}
}

int main()
{
 	int dizi[] = {1,2,3,4,5,6,7,8,9};
 	int islem;
 	printf("Ortalama Tipi \n1-Aritmetik\n2-Geometrik\n3-Harmonik\n");
 	scanf("%d",&islem);
 	double sonuc = OrtalamaHesapla(dizi,9,islem);
 	printf("Ortalama: %.2f", sonuc);
 	return 0;
}

