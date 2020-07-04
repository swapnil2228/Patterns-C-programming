/*Accept number from user and display below pattern. 
Input :  5  
Output : 1 * 2 * 3 * 4 * 5 *  */

#include<stdio.h>
void pattern(int no){
	int num=1;
	while(no>0){
		printf("%d *\t",num++);
		no--;
	}
}
int main(){
	int n=0;
	printf("enter the number");
	scanf("%d",&n);
	printf("\n-----------------------------------\n");
	pattern(n);
	return 0;
}
