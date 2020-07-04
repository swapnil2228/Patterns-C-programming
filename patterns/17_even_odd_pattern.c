/* Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 5  
Output : 
2 4 6 8 10   
1 3 5 7 9   
2 4 6 8 10   
1 3 5 7 9   */

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0,num=1;
	for(i=0;i<iRow;i++){
		if(i%2==0){
			num=2;
		}
		else{
			num=1;}
		for(j=0;j<iCol;j++){
			printf("%d   ",num);
			num+=2;}
		printf("\n");
	}
}
int main(){
	int row=0,col=0;

	printf("enter row:");
	scanf("%d",&row);

	printf("enter col:");
	scanf("%d",&col);

	printf("\n_____________________________________\n");
	pattern(row,col);

	return 0;
}
