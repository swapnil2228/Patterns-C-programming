/*Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol = 5  
Output : 5 4 3 2 1   
	 5 4 3 2 1   
	 5 4 3 2 1 */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	for(i=0;i<iRow;i++){
		for(j=iCol;j>0;j--)
			printf("%d  ",j);
		printf("\n");
	}
}
int main(){
	int row=0,col=0;

	printf("enter row:");
	scanf("%d",&row);

	printf("enter col:");
	scanf("%d",&col);

	printf("\n--------------------------------------------\n");
	pattern(row,col);
	
	return 0;
}
