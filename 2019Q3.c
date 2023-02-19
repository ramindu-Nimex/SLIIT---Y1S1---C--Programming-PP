#include <stdio.h>
#include <assert.h>

// Function declare
float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main(void) {
	
	// variable declare
	float amount, rate;
	float annAmount = 0.0;
	int i;
	
	// testing assert
	testTotalAmount();
	 
	printf("assert pass !!\n\n"); // if assert will pass and display this statement
	 
	// Input intial amount 
	printf("Enter Intial Amount :"); // prompt
	scanf("%f",&amount);
	
	// Input interest rate  
	printf("Enter annual interest rate :"); // prompt
	scanf("%f",&rate); 
	
	// Function calling 
	annAmount = findTotalAmount(rate, amount);
	
	
	for(i=1; i<=5; i++) {
		
		// display the total amount earned at the end of each year 
		printf("Amount After Year %d : %.2f\n",i,annAmount);
		annAmount = findTotalAmount(rate, annAmount);
	}
	return 0;
}

// calcAnnualInterest Function Implementation
float calcAnnualInterest(float interestRate, float amount) {
	
	float interest = 0.0;
	
	if(amount > 1000000) {
		
		interest = amount * ((interestRate/100.0) + 0.5);
	}
	else {
		
		interest = amount * (interestRate/100.0);
	}
	
	return interest;
}

// findTotalAmount Function Implementation
float findTotalAmount(float interestRate, float amount) {
	
	float totalAmount;
	
	totalAmount = calcAnnualInterest(interestRate,amount) + amount;
	
	return totalAmount;
}

// testTotalAmount Function Implementation
void testTotalAmount() {
	
	assert(findTotalAmount(10,10000) == 11000);
}
