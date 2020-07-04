/*3)Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 5  iCol = 5  
Output : 
a b c d e   
1 2 3 4 5   
a b c d e   
1 2 3 4 5   
a b c d e   */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	char ch='\0';
	for(i=0;i<iRow;i++){
		if(i%2==0)
			ch='a';
		else
			ch='1';
		for(j=0;j<iCol;j++)
			printf("%c  ",ch++);
		printf("\n");
	}
}
int main(){
	int row=0,col=0;
	
	printf("enter Row:");
	scanf("%d",&row);

	printf("enter col: ");
	scanf("%d",&col);

	printf("\n__________________________________________\n");
	pattern(row,col);

	return 0;
}
