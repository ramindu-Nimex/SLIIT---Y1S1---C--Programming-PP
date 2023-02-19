#include <stdio.h>

int main() {
	
	// variable declare
	int pType, noOfPizza;
	char pSize, credit, loyalty, online;
	float amount= 0.0, total =0.0, discount = 0.0, netAmount = 0.0;
	
	// Input Pizza type
	printf("piza type :"); // prompt
	scanf("%d",&pType);
	
	// stop entering the order details when the customer input -1 as the pizza type
	while( pType != -1) {
		
		// Input Pizza Size
		printf("Enter pizza Size :"); // prompt
		scanf(" %c",&pSize);
		
		
		if( pSize == 'L' || pSize == 'M') {
			
			// Input No of Pizza 
			printf("Enter No of pizza :"); // prompt
			scanf("%d",&noOfPizza);
			
			// using switch statement
			switch(pType) {
				
				// pizza type 1 implementation
				case 1:
					if(pSize == 'L') {
						
						amount += 1720.00 * noOfPizza;
					}
					else {
						
						amount += 975.00 * noOfPizza;
					}
					break;
				
				// pizza type 2 implementation	
				case 2:
					if(pSize == 'L') {
						
						amount += 1820.00 * noOfPizza;
					}
					else {
						
						amount += 1000.00 * noOfPizza;
					}
					break;
					
				default :
					printf("Invalid");		
			}
			printf("\n");
			
		}
		else {
			
			printf("Invalid\n\n");
		}
		// Input Pizza type
		printf("piza type :"); // prompt
		scanf("%d",&pType);
	}
	printf("\n");
	
	total += amount;
	
	// get discount for credit cards
	printf("Are you paying by credit card (y/n) :");
	scanf(" %c", &credit);
	
	// get discount for loyalty customers
	printf("Are you paying loyalty customer (y/n) :");
	scanf(" %c", &loyalty);
	
	// get discount for Online orders
	printf("In this oder online (y/n) :");
	scanf(" %c", &online);
	
	if( credit == 'Y') {
		
		discount = 0.2 * total;
	}
	else if( loyalty == 'Y') {
		
		discount = 0.15 * total;
	}
	else if( online == 'Y') {
		
		discount = 0.05 * total;
	}
	else {
		
		discount = 0.0 * total;
	}
	
	netAmount = total - discount;
	
	printf("\nTotal bill amount : %.2f\n",total); // display total bill
	printf("Discount : %.2f\n",discount); // display Discount
	printf("Net Amount : %.2f\n",netAmount); // display net amount
	
	return 0;
}
