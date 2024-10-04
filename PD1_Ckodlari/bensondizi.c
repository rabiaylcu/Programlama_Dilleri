/* Klavyeden girilen n elemanlý A dizisi için aþaðýdaki iþlemleri
gerçekleþtiren programýn kodunu yazýnýz. Gerçekleþtirilecek iþlem klavyeden
girilerek seçilecek ve klavyeden -1 girilene kadar her iþlemden sonra yeni bir
iþlem için kullanýcýdan giriþ yapmasý istenecek.
*/

#include <stdio.h>
#include <math.h>

int main (){
	
	int n,a[n],i,toplam=0, max, min;
	float ortalama=0;
	
	printf ("dizinin eleman sayisini giriniz: ");
	scanf ("%d",&n);
	
	for (i=0;i<n;i++){
		printf ("dizinin %d. elemaninin degerini giriniz: ", i+1);
		scanf ("%d", &a[i]);
		
	}

	printf ("dizinin elemanlari sirasiyla:\t");	
	for (i=0;i<n;i++){
		printf ("%d\t", a[i]);
				
	}
	
	for (i=0;i<n;i++){
		toplam=toplam+a[i];
		ortalama=toplam/n;
	}
	printf ("\ndizinin elamanlari toplami: %d", toplam);
	printf ("\ndizinin elemanlarinin ortalamasi: %.2f\n", ortalama);
	
	printf ("ortalamadan buyuk degerler: ");
	for (i=0;i<n;i++){
		if (a[i]>ortalama){
		printf ("%d\t", a[i]);
		}
	}
	

	printf ("\ndizinin ters hali: ");
	int gecici[n];
		
		for (i=0;i<n;i++){
		gecici[i]=a[n-1-i];
		printf ("%d", gecici[i]);
	    }
	
	
	max=a[0],min=a[0];
		for (i=0;i<n;i++){
	  	
	  		if (a[i]>max){
	  		max=a[i];
		  	}
			if (a[i]<min){
			min=a[i];
			}
		}
		
		printf ("\nmax: %d\n", max);
		printf ("min: %d", min);

	printf("\nDizinin kucukten buyuge dogru siralanmis hali: ");
	
	int j,temp;
	    
		for(i=0; i<n-1; i++)
	    {
	        for(j=i+1; j<n; j++)
	        {
	            if(a[j] < a[i]){
	                temp = a[i];
	                a[i] = a[j];
	                a[j] = temp;
	            }
	        }
	    }
	    
		for(i=0; i<n; i++)
	    {
	        printf("%d\t",a[i]);
	    }
	
	return 0;

}

//while!=-1 switch case yapýlacak
