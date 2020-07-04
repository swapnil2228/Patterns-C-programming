/*1)Accept number from user and display below pattern. 
Input :  5  
Output : A B C D E */

#include<stdio.h>
void pattern(int no){
	char ch='A';
	int i=0;
/*	while(no>0){
		printf("%c\t",ch++);
		no--;
	}*/
	for(i=0;i<no;i++){
		printf("%c\t",ch++);
	}
}
int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("\n--------------------\n");
	pattern(n);
	return 0;
}
