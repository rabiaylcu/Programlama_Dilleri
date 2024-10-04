#include <stdio.h>

int toplam(int dizi[], int n) {
    
	if (n == 0) { 
        return 0;
    } 
	
	else {
        return dizi[n-1] + toplam(dizi, n-1); 
    }
}

int main() {
    
	int i, n, dizi[100];
    
	printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    printf("Dizi elemanlarini girin:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &dizi[i]);
    }

    
	int sonuc = toplam(dizi, n);
    printf("Dizideki elemanlarin toplami: %d\n", sonuc);
    
	return 0;
}


