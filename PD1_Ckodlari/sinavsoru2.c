#include <stdio.h>
int main(){

 //const int NofStudents=4;
 float a[4][5]={1, 67, 76, 55, 0 , 2, 89, 56,44,0,3,66,76,54,0,4,99,89,88,0};
 int i,j,id;
 float max=0.0,sum;
 	
	for (i=0;i<4;i++){
 		sum=0.0;
 			
		for(j=1; j<4;j++){
			sum+=a[i][j];			
		} 

 			a[i][j]=sum/3;
	}
	
 	max=a[0][4];
 	id=a[0][0];
 
 	for (i=1;i<4;i++){
 		if (a[i][4]> max) {
 		max=a[i][4];
 		id=a[i][0]; 
		}
 		
	 }
 		
		
 	printf("Maximum average is %.2f of student %d",max,id);
	 return 0;
}
