#include <stdio.h>
int main() {
	
	// variable declare
	int identity[4][4];
	int i, j, matrix;
	
	for(i=0; i<4; i++) {
		
		// value of row
		printf("Value of row %d\n",i+1); 
		for(j=0;j<4; j++) {
			
			// Input value of element
			printf("Enter Element %d :",j+1); // prompt
			scanf("%d",&identity[i][j]);
		}
		printf("\n\n");
	}
	
	// display matrix
	for(i=0; i<4; i++) {
		
		for(j=0;j<4; j++) {
			
			printf("%3d",identity[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++) {
		
		
		for(j=0;j<4; j++) {
			
			if(i == j ) {
				if(identity[i][j] != 1) {
					
					matrix = 0;
				
				}
			else {
				
				matrix = 1;
			}
		
			}
			
		}
	
	}
	if(matrix == 1) {
			
		printf("\n\nThis Is an identity matrix");
	}
	else {
		
		printf("\n\nThis Is Not an identity matrix");
	}
	return 0;
}
