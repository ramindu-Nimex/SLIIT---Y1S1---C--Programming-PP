#include <stdio.h>
#include <assert.h>

// Function declare
float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcFuelCost(int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(void) {
	
	// testing assert
	assert(calcRemainingFuel(1,4) == 1);
	assert(calcRemainingFuel(2,10) == 10);
	
	printf("Assert Pass\n\n"); // if assert will pass and display this statement
	
	// variable declare
	int type;
	float usedFuel, remainFuel, cost;
	
	// input vehicle type
	printf("Enter The Vehicle Type :"); // prompt
	scanf("%d",&type);
	
	while(type != -1) {
		
		// input used fuel
		printf("Enter Used fuel Quota :"); // prompt
		scanf("%f",&usedFuel);
		
		// Function calling 
		remainFuel = calcRemainingFuel(type,usedFuel);
		cost = calcFuelCost(type,usedFuel);
		
		displayDetails(type,usedFuel,remainFuel,cost);
		
		// input vehicle type
		printf("Enter The Vehicle Type :"); // prompt
		scanf("%d",&type);
	}
	
	return 0;
}

// calcRemainingFuel Function Implementation
float calcRemainingFuel(int vehicleType, float usedFuelQuota) {
	
	float remainingQuota;
	
	if(vehicleType == 1) {
		
		remainingQuota = 5 - usedFuelQuota;
	}
	else if(vehicleType == 2) {
		
		remainingQuota = 20 - usedFuelQuota;
	}
	else if(vehicleType == 3) {
		
		remainingQuota = 20 - usedFuelQuota;
	}
	else if(vehicleType == 4) {
		
		remainingQuota = 30 - usedFuelQuota;
	}
	else {
		
		printf("Invalid Type\n");
	}
	return remainingQuota;
}

// calcFuelCost Function Implementation
float calcFuelCost(int vehicleType, float usedFuelQuota) {
	
	float cost;
	
	if(vehicleType == 1) {
		
		cost = usedFuelQuota * 370.00;
	}
	else if(vehicleType == 2) {
		
		cost = usedFuelQuota * 370.00;
	}
	else if(vehicleType == 3) {
		
		cost = usedFuelQuota * 510.00;
	}
	else if(vehicleType == 4) {
		
		cost = usedFuelQuota * 370.00;
	}
	else {
		
		printf("Invalid Type\n");
	}
	return cost;
}

// displayDetails Function Implementation
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost) {
	
	printf("Vehicle Type\tQuota Used\tQuota Remaining\tFuel Cost\n");
	
	printf("%d\t%12.2f\t\t%.2f\t\t%.2f\n\n",vType,usedFuelQuota,remainingQuota,cost);
	
}
