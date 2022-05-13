#include<stdio.h>

int main(void){
	int x; //%d or %i
	float f; //%f
	char c; //%c
	
	x = 25;
	f = 3.14;
	c = 'A';
	
	int num1, num2, num3, num5;
	float num4;
	
	num1 = x + 10;
	num2 = x - 10;
	num3 = x * 10;
	num4 = x / 10.0;
	num5 = x % 10;
	
	printf("The value of x is %d\n", x);
	//printf("The value of f is %f\n", f);
	//printf("The value of c is %c\n", c);
	printf("The value of x+10 is %d\n", num1);
	printf("The value of x-10 is %d\n", num2);
	printf("The value of x*10 is %d\n", num3);
	printf("The value of x/10 is %f\n", num4);
	printf("The value of x mod 10 is %d\n", num5);
	
	return 0;
}
