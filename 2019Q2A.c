#include <stdio.h>

int main(void) {
	
	// variable declare
	int fib[10];
	int i;
	
	// Initialize first two array elements
	fib[0] = 0;
	fib[1] = 1;
	
	// input 
	for(i=2; i<10; i++) {
		
		fib[i] = fib[i-2] + fib[i-1];
	}
	
	// output
	for(i=0; i<10; i++) {
		
		printf("%d\t",fib[i]);
	}
	return 0;
}
