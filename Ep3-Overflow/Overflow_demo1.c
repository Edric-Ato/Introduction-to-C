#include<stdio.h>
#include<limits.h>

int main(void){
	int x = 2147483647;
	unsigned int y = x + 1;
	long long int z = x + (unsigned int)1;
	
	printf("%d\n", x);
	printf("%d\n", x+1);
	printf("%u\n", y);
	printf("%lld\n", z);
	
	printf("%d - %d\n", INT_MIN, INT_MAX);
	printf("%lld - %lld\n", LLONG_MIN, LLONG_MAX);
	
	return 0;
}
