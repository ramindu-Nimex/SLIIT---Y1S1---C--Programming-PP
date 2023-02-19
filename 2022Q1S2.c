#include <stdio.h>

int main() {
	
	// variable declare
	int num, original, reserved = 0, remainder, digit = 0;
	
	while(digit != 4) {
		
		// input 4 digit number
		printf("Enter a four digit number : "); // prompt
		scanf("%d", &num);
		
		original = num;
		digit = 0;
		
		while(num != 0) {
			
			num /= 10;
			digit++;
		}
		
		if(digit != 4) {
			
			printf("Invalid Number, please enter 4 digit number\n");
		}
	}
	
	num = original;
	
	while(num != 0) {
		
		remainder = num % 10;
		reserved = reserved * 10 + remainder;
		num /= 10;
	}
	
	if(original == reserved) {
		
		printf("It is a Palindrome\n");
	}
	else {
		
		printf("It is not a Palindrome\n");
	}
	
	return 0;
}
