/*Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol =  4  
Output : 
1 2 3 4   
2 3 4 5    
3 4 5 6    
4 5 6 7*/

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	for(i=1;i<=iRow;i++){
		for(j=0;j<iCol;j++){
			printf("%d  ",i+j);
		}
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
