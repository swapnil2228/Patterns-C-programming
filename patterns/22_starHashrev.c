/*Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : 
* * * *   
* * * #   
* * # #   
* # # # */

#include<stdio.h>
void pattern(int iRow,int iCol){
	int i=0,j=0;

	for(i=0;i<iRow;i++){
		for(j=iCol;j>0;j--){
			if(j<=i)
				printf("#  ");
			else
				printf("*  ");
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

	pattern(row,col);

	return 0;
}
