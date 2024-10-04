#include <stdio.h>
int strLength(char str[]);
void strReverse(char str[], int len);
int main(void){
 char s[40];
 int len=0;
 /* read array */
 printf("Write something : ");
 gets(s);
 // find the length of the string
 len= strLength(s);
 // reverse the array
 strReverse(s,len);
 printf("\nThe string length: %d\n", len);
 printf("Reverse: %s\n", s);
return 0;
}

int strLength(char str[]){
 int i;
 for(i=0; str[i]!='\0'; i++){
}
	return i;

}

void strReverse(char str[], int len){
 char temp;
 int i;
	 for(i=0;i<len/2;i++){
		 temp= str[len-1-i];
		 str[len-1-i]= str[i];
		 str[i]= temp;
	 }
}
