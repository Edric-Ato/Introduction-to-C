#include<stdio.h>

int main(void){
	float x,y;
	char Operator;
	
	printf("Enter two numbers:\n");
	scanf(" %f", &x);
	scanf(" %f", &y);
	printf("Enter an operation\n");
	printf("Addition [A]\n");
	printf("Subtraction [S]\n");
	printf("Multiplication [M]\n");
	printf("Division [D]\n");
	scanf(" %c", &Operator);
	
	float result;
	if(Operator == 'A'){
		result = x+y;
	}
	else if(Operator == 'S'){
		result = x-y;
	}
	else if(Operator == 'M'){
		result = x*y;
	}
	else if(Operator == 'D'){
		result = x/y;
	}
	else{
		printf("The operation you placed cannot be evaluated right now");
		return 0;
	}
	
	printf("The result is %f", result);
	
	return 0;
}
