/*4)Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 5  
Output : 
4 4 4 4 4   
3 3 3 3 3   
2 2 2 2 2   
1 1 1 1 1  */


#include<stdio.h>

void pattern(int iRow, int iCol){
	int i=0,j=0;
	for(i=iRow;i>0;i--){
		for(j=0;j<iCol;j++)
			printf("%d  ",i);
		printf("\n");
	}

}
int main(){
	int row=0,col=0;

	printf("Enter row:");
	scanf("%d",&row);

	printf("Enter col:");
	scanf("%d",&col);

	printf("\n______________________________\n");
	pattern(row,col);

	return 0;
}
