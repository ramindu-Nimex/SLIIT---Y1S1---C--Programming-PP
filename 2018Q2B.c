#include <stdio.h>

int main(void) {
	
	// variable declare
	char arr[4][4];
	int i, j;
	
	// outer for loop
	for( i=0; i<4; i++) {
		
		// inner for loop
		for( j=0; j<4; j++) {
			
			// input color of the LED bulbs
			printf("Enter the Color of the bulb :"); // prompt
			scanf(" %c",&arr[i][j]);
		}
	}
	printf("\n");
	// display array
	for( i=0; i<4; i++) {
		
		for( j=0; j<4; j++) {
			
			printf(" %c\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	 // position of the color red
	for( i=0; i<4; i++) {
		
		for( j=0; j<4; j++) {
			
			if(arr[i][j] == 'R') {
				
				printf("[%d,%d] ",i,j);
			}
		}
	}
	return 0;
	
}
