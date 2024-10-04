#include <stdio.h>

double ortalama(int dizi[], int n) {
    if (n == 0) { 
        return 0;
    } else {
        return ((dizi[n-1] + (n-1) * ortalama(dizi, n-1)) / n); 
    }
}

int main() {
    int i, n, dizi[100];
    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    printf("Dizi elemanlarýný girin:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &dizi[i]);
    }

    double ort = ortalama(dizi, n);
    printf("Dizideki sayýlarýn ortalamasý: %.2lf\n", ort);
    return 0;
}

