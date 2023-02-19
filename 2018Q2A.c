#include <stdio.h>
#include <string.h>

// using structure
struct customer{
	
	// variable declare
	int accNb;
	char name[20];
	char type;
	float amount;
}c[4];
int main(void) {
	
	float totAmount = 0.0;
	float depAmount = 0.0;
	float witAmount = 0.0;
	float maxD = 0.0;
	float maxW = 0.0;
	
	char maxDName[20];
	char maxWName[20];
	
	int i;
	
	// using for loop
	for( i=1; i<=5; i++) {
		
		// Input Account number
		printf("Enter Account Number :"); // prompt
		scanf("%d",&c[i].accNb);
		
		// Input Name
		printf("Enter Name :"); // prompt
		scanf("%s",c[i].name);
		
		// Input Transaction type
		printf("Enter Transaction type(W/D) :"); // prompt
		scanf(" %c",&c[i].type);
		
		// Input Amount
		printf("Enter amount :"); // prompt
		scanf("%f",&c[i].amount);
		
		printf("\n"); // new line
	}
	printf("\n"); // new line
	
	for( i=1; i<=5; i++) {
		
		printf("Account Nb : %d\n", c[i].accNb);
		printf("Name : %s\n", c[i].name);
		printf("Transaction type : %c\n", c[i].type);
		printf("Amount : %.2f\n", c[i].amount);
		printf("\n");
	}
	printf("\n");
	for( i=1; i<=5; i++) {
		
		if( c[i].type == 'D') {
			
			depAmount = depAmount + c[i].amount;
			
			if( maxD < c[i].amount) {
				
				maxD = c[i].amount;
				strcpy( maxDName, c[i].name);
			}
		}
		else {
			
			witAmount = witAmount + c[i].amount;
			
			if( maxW < c[i].amount) {
				
				maxW = c[i].amount;
				strcpy( maxWName, c[i].name);
			}
		}
	}
	printf("Total Deposit Amount : %.2f\n",depAmount);
	printf("Total Withdraw Amount : %.2f\n",witAmount);
	printf("customer max D : %s\n",maxDName);
	printf("customer max w : %s\n",maxWName);
	return 0;
}
