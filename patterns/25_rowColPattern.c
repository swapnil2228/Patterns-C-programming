/* Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol =  4  
Output : 
1 2 3 4   
1 * * 4
1 * * 4
1 2 3 4   */

#include<stdio.h>
void pattern(int iRow,int iCol){
	int i=0,j=0;
	for(i=1;i<=iRow;i++){
		for(j=1;j<=iCol;j++){
			if((i==1) || (j==1) || (i==iRow) || (j==iCol))
				printf("%d  ",j);
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

	printf("\n________________________________________\n");
	pattern(row,col);

	return 0;
}
