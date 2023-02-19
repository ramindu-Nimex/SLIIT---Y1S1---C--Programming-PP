#include <stdio.h>
#define SIZE 8
int main (Void){
	
	// variables declare
	int numArr[SIZE], numArr2[SIZE], i, n, j = 0, k; 
	
	
	for (i = 0; i < 8; ++i) {
		
		// Input integer
		printf("Enter the Integer : "); // prompt
		scanf("%d", &numArr[i]);
	}
	
	// displaying array
	printf("Array Elements are : ");
	
	for (i = 0; i < 8; ++i) {
		
		printf("%d ", numArr[i]);
	}
	
	printf("\n"); // new line
	
	// move the array
	printf("Enter the position to move : ");
	scanf("%d", &n);
	
	k = n;
	
	if (n > 0 && n < 8){

		for (i = n; i < 8; ++i) {
			
			numArr2[n] = numArr[j];
			++n;
			++j;
		}
		
		for (i = 0; i < k; ++i) {
			
			numArr2[i] = numArr[SIZE - (k - i)];
		}
	
	printf("\n");
	
	// displaying new order of array
	printf("New Array Elements are : ");
	
		for (i = 0; i < 8; ++i) {
			
			printf("%d ", numArr2[i]);
		}
					
	}else if(n == 0 || n == 8) {
		
		// displaying new order of array
		printf("New Array Elements are : ");
	
		for (i = 0; i < 8; ++i) {
			
			printf("%d ", numArr[i]);
		}
	}else {
		
		// displaying new order of array
		printf("Invalid Input !");
	
	}		
	return 0;
}
