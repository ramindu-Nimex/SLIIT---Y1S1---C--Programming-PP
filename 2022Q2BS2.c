#include <stdio.h>
int main(void) {
	
	// variable declare
	int image[4][4];
	int bwimage[4][4];
	int i, j;
	
	// outer for loop
	for(i=0; i<4; i++) {
		
		printf("Values For Row %d\n",i+1);
		// inner for loop
		for(j=0; j<4; j++) {
			
			// Input element value
			printf("Enter Element %d : ",j+1); // prompt
			scanf("%d",&image[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	// convert 
	for(i=0; i<4; i++) {
		
		for(j=0; j<4; j++) {
			
			if(image[i][j] >= 55) {
				
				bwimage[i][j] = 1;
			}
			else if(image[i][j] < 55){
				bwimage[i][j] = 0;
			}
		}
		printf("\n");
	}
	printf("\n");
	// display image array
	for(i=0; i<4; i++) {
		
		for(j=0; j<4; j++) {
			
			printf("%4d",image[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	// display bwimage array
	for(i=0; i<4; i++) {
		
		for(j=0; j<4; j++) {
			
			printf("%3d",bwimage[i][j]);
		}
		printf("\n");
	}
	return 0;
}
