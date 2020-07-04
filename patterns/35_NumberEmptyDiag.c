/* Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol =  4  
Output : 
1 2 3 4 5   
1 2       5   
1   3     5   
1    4    5   
1 2 3 4 5   */


#include<stdio.h>

void pattern(int iRow,int iCol){
	int i=0,j=0;

	for(i=1;i<=iRow;i++){
		for(j=1;j<=iCol;j++){
			if((i==1) || (j==1) || (i==iRow) || (j==iCol) || (i==j))
				printf("%d\t",j);
			else
				printf("\t");
		}
		printf("\n");
	}
}

int main(){
	int row=0,col=0;

	printf("row:");
	scanf("%d",&row);

	printf("col:");
	scanf("%d",&col);

	printf("\n__________________________________\n");
	pattern(row,col);

	return 0;
}
