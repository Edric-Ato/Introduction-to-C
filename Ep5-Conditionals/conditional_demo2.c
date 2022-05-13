#include<stdio.h>

int main(void){
	int x;
	
	printf("Enter an integer: ");
	scanf(" %d", &x);
	
	if(x < 0){
		printf("Your number is negative");
	}
	else if(x > 0){
		printf("Your number is positive");
	}
	else{
		printf("Your number is zero");
	}
	
	return 0;
}
