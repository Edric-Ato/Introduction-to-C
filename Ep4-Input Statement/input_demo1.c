#include<stdio.h>

int main(void){
	int x;
	int y;
	
	printf("Enter two integers\n");
	scanf("%d", &x);
	scanf("%d", &y);
	//float -> %f
	//character -> %c
	//unsigned int -> %u
	//long long int -> %lld
	//double -> %lf
	
	printf("The sum of the two numbers is %d\n", x + y);
	printf("The sum of 5 and 10 is %d\n", 5+10);
	
	return 0;
}
