#include <stdio.h>
#include <assert.h>

// Function declare
float calInterest(int FDType, float depositAmount);
float calTax(float annualInterest);
void displayDetails(float interest, float taxAmount);

int main(void) {
	
	// variable declare
	int type;
	float depositAmount, interest, tax;
	
	// testing assert
	assert(calInterest(1,100000) == 16000);
	assert(calInterest(2,100000) == 15000);
	
	printf("Assert Pass\n\n"); // if assert will pass and display this statement
	
	// Input deposit type
	printf("Fixed Deposit Type :"); // prompt
	scanf("%d",&type);
	
	while(type != -1) {
		
		// Input deposit amount
		printf("Deposit Amount :"); // prompt
		scanf("%f",&depositAmount);
		
		// Function calling 
		interest = calInterest(type,depositAmount);
		tax = calTax(interest);
		
		displayDetails(interest, tax);
		
		// Input deposit type
		printf("\n\nFixed Deposit Type :"); // prompt
		scanf("%d",&type);
	}
	
	return 0;
}

// calInterest Function Implementation
float calInterest(int FDType, float depositAmount) {
	
	float annualInterest;
	
	if(FDType == 1) {
		
		annualInterest = depositAmount * (16.0/100.0);
	}
	else if(FDType == 2) {
		
		annualInterest = depositAmount * (15.0/100.0);
	}
	else if(FDType == 3) {
		
		annualInterest = depositAmount * (15.5/100.0);
	}
	else if(FDType == 4) {
		
		annualInterest = depositAmount * (17.5/100.0);
	}
	else {
		
		printf("Invalid FDtYPE");
	}
	return annualInterest;
}

// calTax Function Implementation
float calTax(float annualInterest) {
	
	float tax;
	
	tax = annualInterest * (5.0/100.0);
	
	return tax;
}

// displayDetails Function Implementation
void displayDetails(float interest, float taxAmount) {
	
	float amountPayble;
	
	printf("\nAnnual Interest\t\tTax amount\tAmount Payable\n");
	amountPayble = interest - taxAmount;
	
	printf("%.2f\t%15.2f\t\t%.2f\n",interest,taxAmount,amountPayble);
	
}
