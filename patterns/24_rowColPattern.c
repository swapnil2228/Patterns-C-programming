/*Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 6  iCol = 5  
Output : 
* * * * *   
* @ @ @ *   
* @ @ @ *   
* @ @ @ *   
* @ @ @ *   
* * * * *   */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	for(i=1;i<=iRow;i++){
		for(j=1;j<=iCol;j++){
			if((i==1) || (j==1) || (i==iRow) || (j==iCol))
				printf("*  ");
			else
				printf("@  ");
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

	printf("\n________________________________\n");
	pattern(row,col);

	return 0;

}
