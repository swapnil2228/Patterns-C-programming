/*3)Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol = 5  
Output : 
A A A A A   
B B B B B   
C C C C C  */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	char ch='A';
	for(i=0;i<iRow;i++){
		for(j=0;j<iCol;j++)
			printf("%c  ",ch);
		printf("\n");
		ch++;
	}	
}

int main(){
	int row=0,col=0;

	printf("Enter row:");
	scanf("%d",&row);

	printf("Enter col:");
	scanf("%d",&col);

	printf("\n__________________________\n");
	pattern(row,col);


	return 0;
}
