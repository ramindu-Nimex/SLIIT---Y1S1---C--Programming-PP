#include <stdio.h>
int main() {
	
	// variable declare
	int line, i, j;
	char c1, c2;
	
	// Input character 1
	printf("Enter character 1 :"); // prompt
	scanf(" %c",&c1);
	
	// Input character 2
	printf("Enter character 2 :"); // prompt
	scanf(" %c",&c2);
	
	// Input Number of line
	printf("Enter Number of Line :"); // prompt
	scanf("%d",&line);
	
	// outer for loop
	for(i=1; i<=line; i++) {
		
		// inner for loop
		for(j=1; j<=i; j++) {
			
			if(j%2 == 1) {
				
				printf(" %c",c1);
			}
			else{
				
				printf(" %c",c2);
			}
		}
		printf("\n");
	}
	return 0;
}
