/*5)Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol =  4  
Output : 
1 	2 	3 	4   
5 	6 	7 	8   
9 	10 	11 	12  */


#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0,num=1;
	for(i=0;i<iRow;i++){
		for(j=0;j<iCol;j++)
			printf("%d\t",num++);
		printf("\n");
	}
}

int main(){
	int row=0,col=0;

	printf("enter Row:");
	scanf("%d",&row);

	printf("enter col");
	scanf("%d",&col);

	printf("\n__________________________________\n");
	pattern(row,col);
}
