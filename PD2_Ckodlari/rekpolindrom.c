#include <stdio.h>
#include <string.h>

int palindrom(char *str, int baslangic, int bitis) {
    if (baslangic >= bitis) { 
        return 1;
    } 
	else if (str[baslangic] != str[bitis]) { 
        return 0;
    } 
	else {
        return palindrom(str, baslangic+1, bitis-1); 
    }
}

int main() {
    char str[100];
    printf("Bir string ifade girin: ");
    scanf("%s", str);

    int n = strlen(str);
    if (palindrom(str, 0, n-1)) {
        printf("%s palindromdur.\n", str);
    } 
	else {
        printf("%s palindrom degildir.\n", str);
    }
    return 0;
}

