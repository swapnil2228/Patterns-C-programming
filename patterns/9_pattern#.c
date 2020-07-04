/* Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol = 4  
Output : * # * #    
	 * # * #    
	 * # * #
*/

#include<stdio.h>
void pattern(int iRow, int iCol){
	int i=0,j=0;
	char arr[]={'*','#'};
	for(i=0;i<iRow;i++){
		for(j=0;j<iCol;j++)
			printf("%c\t",arr[j%2]);
		printf("\n");
	}
}

int main(){
	int row=0,col=0;

	printf("enter row");
	scanf("%d",&row);

	printf("enter col");
	scanf("%d",&col);

	printf("\n---------------------------\n");
	pattern(row,col);

	return 0;
}
