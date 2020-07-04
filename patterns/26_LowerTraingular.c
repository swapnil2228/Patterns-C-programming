/* Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : 
*    
* *     
* * *     
* * * *    */

#include<stdio.h>

void pattern(int iRow, int iCol){
	int i=0,j=0;

	for(i=0;i<iRow;i++){
		for(j=0;j<=iCol;j++){
			if(j<=i)
				printf("*  ",j);
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

	printf("\n_____________________________________________\n");
	pattern(row,col);

	return 0;
}
