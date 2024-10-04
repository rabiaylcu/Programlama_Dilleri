#include <stdio.h>

int main (){
	
	int rastgele;
	
	srand(time(NULL));
	rastgele=rand();
	printf ("%d", rastgele%1001);
	
	return 0;
}
