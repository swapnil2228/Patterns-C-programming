/*  Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 3  
Output : 1 2 3
 	 1 2 3   
	 1 2 3   
	 1 2 3  */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	for(int i=0;i<iRow;i++){
		for(j=1;j<=iCol;j++)
			printf("%d  ",j);
		printf("\n");
	}
}
int main(){
	int row=0,col=0;

	printf("enter row");
	scanf("%d",&row);

	printf("enter column");
	scanf("%d",&col);

	printf("\n---------------------------------------\n");
	pattern(row,col);

	return 0;
}
