/*4)Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 5  iCol = 5  
Output :  
1  2  3  4  5   
-1 -2 -3 -4 -5    
1  2  3  4  5
-1 -2 -3 -4 -5    
1  2  3  4  5  */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0,num=1,mult=1;
	for(i=0;i<iRow;i++){
			num=1;
		for(j=0;j<iCol;j++){
			printf("%d\t",num++*mult);
		}
		mult=(-mult);
		printf("\n");
	}
}
int main(){
	int row=0,col=0;

	printf("enter row:");
	scanf("%d",&row);

	printf("enter col:");
	scanf("%d",&col);

	printf("\n__________________________________\n");
	pattern(row,col);

	return 0;
}
