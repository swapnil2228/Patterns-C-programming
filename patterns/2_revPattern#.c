/* Accept number from user and display below pattern. 
Input :  5  
Output : 5 # 4 # 3 # 2 # 1 # */

#include<stdio.h>
void pattern(int no){
	int i=0;
	for(i=no;i>0;i--){
		printf("%d # \t ",no);
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
