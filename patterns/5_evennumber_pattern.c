/*Accept number from user and display below pattern. 
Input :  8 
Output : 2 4 6 8 10 12 14 16 */


#include<stdio.h>
void pattern(int no){
	int num=2;
	while(no>0){
		printf("%d\t",num);
		no--;
		num+=2;
	}
}
int main(){
	int n=0;
	printf("enter number");
	scanf("%d",&n);
	printf("\n-----------------------------\n");
	pattern(n);
	return 0;
}
