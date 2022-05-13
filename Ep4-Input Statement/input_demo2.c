#include<stdio.h>

int main(void){
	float dummy;
	int x;
	
	printf("Enter a number: ");
	scanf("%f", &dummy);
	
	x = (int)dummy;
	printf("The integer portion of your number is %d", x);
	
	return 0;
}
