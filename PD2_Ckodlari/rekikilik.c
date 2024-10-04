#include <stdio.h>

void ikilik(int sayi) {
    if (sayi > 1) { 
        ikilik(sayi / 2);
    }
    printf("%d", sayi % 2);
}

int main() {
    int n;
    printf("Bir sayi girin: ");
    scanf("%d", &n);

    printf("%d sayisinin ikilik tabandaki karsiligi: ", n);
    ikilik(n);
    printf("\n");
    return 0;
}

