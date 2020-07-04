/*2)Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : 
A B C D   
a b c d   
A B C D    
a b c d  */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	char arr[]={'A','a'};

	for(i=0;i<iRow;i++){
		for(j=0;j<iCol;j++)
			printf("%c  ",arr[i%2]++);
		arr[0]='A';
		arr[1]='a';
		printf("\n");
	}
}
int main(){
	int row=0,col=0;
	printf("enter row:");
	scanf("%d",&row);

	printf("enter col:");
	scanf("%d",&col);

	printf("\n_______________________________\n");
	pattern(row,col);

	return 0;
}
