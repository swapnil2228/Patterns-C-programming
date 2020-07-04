/*Accept number from user and display below pattern. 
Input :  4 
Output : # 1 * # 2 * # 3 * # 4 *  */

#include<stdio.h>
void pattern(int no){
	int num=1;
	while(no>0){
		printf("#  %d  *  ",num++);
		no--;
	}
}
int main(){
	int n=0;
	printf("enter number");
	scanf("%d",&n);
	printf("\n------------------------------\n");
	pattern(n);
	return 0;
}
