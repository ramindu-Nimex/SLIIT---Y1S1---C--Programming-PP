#include <stdio.h>
#include <assert.h>

// Function declare
float calDiscount(int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);

int main(void) {
	
	// testing assert
	testCalDiscount();
	
	printf("Test Pass !!\n\n"); // if assert will pass and display this statement
	
	// variable declare
	int time;
	float totAmount, discount, finalAmount;
	
	// Input time
	printf("Enter the time :"); // prompt
	scanf("%d",&time);
	
	// Input Total Amount
	printf("Please enter the total amount : "); // prompt
	scanf(" %f",&totAmount);
	
	// Function calling
	discount = calDiscount(time, totAmount);
	finalAmount = totAmount - discount;
	printf("Total amount is %.2f\n",finalAmount); // Display final amount
	
	// Function calling
	displayGift(finalAmount);
	
	return 0;
}

// calDiscount Function Implementation
float calDiscount(int time, float totAmount) {
	
	if( time >= 16 && time <= 19) {
		
		if(totAmount >= 5000) {
			
			return 0.1 * totAmount;
		}
		else if(totAmount < 5000 && totAmount >= 2500){
			
			return 0.07 * totAmount;
		}
		else {
			
			return 0;
		}
	}
	else if( time >= 20 && time <= 22) {
		
		if(totAmount >= 5000) {
			
			return 0.12 * totAmount;
		}
		else if(totAmount < 5000 && totAmount >= 2500){
			
			return 0.09 * totAmount;
		}
		else {
			
			return 0;
		}
	}
	else {
		
		printf("Invalid !\n");
	}
}

// testCalDiscount Function Implementation
void testCalDiscount() {
	
	assert(calDiscount(16,6000) == 600);
	assert(calDiscount(20,3000) == 270);
}

// displayGift Function Implementation 
void displayGift(float finalTot) {
	
	if(finalTot >= 7000) {
		
		printf("Packet of Milk");
	}
	else if(finalTot >= 5000) {
		
		printf("1kg sugar");
	}
	else if(finalTot >= 3000) {
		
		printf("Pack of 6 Eggs");
	}
	else{
		
		printf("Invalid");
	}
}
