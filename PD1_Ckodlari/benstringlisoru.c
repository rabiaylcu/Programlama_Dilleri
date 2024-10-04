#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char min, mak, str1[100], str2[100], str3[200];
	
	int i=0,j=0,k=0,l=0,s;
	
	printf ("birinci metini giriniz: ");
	gets (str1);
	//fflush(stdin);
	printf ("ikinci metini giriniz: ");
	gets (str2);
	
	for(i=0;str1[i]!='\0';i++)
		k++;
	
	while(str2[l]!='\0')
		l++;
	
	printf ("\n1-str1in uzunlugu,\n2-str2nin uzunlugu,\n3-st1+str2,");
	printf ("\n4-str1deki en buyuk karakter,\n5-str2deki en kucuk karakter");
	printf ("\nyapmak istediginiz islemi seciniz: ");
	scanf ("%d", &s);
	
	while (s!=-1)
	{
		switch (s)
		{
			case 1:
				printf ("str1=%d\n", k);
				break;
				
			case 2:
				printf ("str2=%d\n", l);
				break;
				
			case 3:
				for (i=0;str1[i]!='\0';i++)
					str3[i]=str1[i];
					
				for (j=0;str2[j]!='\0';j++)
					str3[i+j]=str2[j];
				
				printf ("birlesmis hali=%s\n", str3);
				break;
				
			case 4:
				mak=str1[0];
				
				for (i=0;str2[i]!='\0';i++)
				{
					if (str2[i]>mak)
					{
						mak=str2[i];
					}
				}
				
				printf ("maksimum=%c\n", mak);
				break;
				
			case 5: 
				min=str2[0];
				for (i=0;str2[i]!='\0';i++)
				{
					if (str2[i]<min)
					{
						min=str2[i];
					}
				}
				
				printf ("minimum=%c\n", min);
				break;
				
			default: 
				printf ("yanlis secim!\n");
		}
		
		printf ("\ndevam icin secim yapin, cikmak icin -1= ");
		scanf ("%d", &s);	
	}
	
	return 0;
}
