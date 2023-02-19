#include <stdio.h>

int main() {
	
	// variable declare
	char type;
	float fee1 = 0.0, fee2 = 0.0, fee3 = 0.0; 
	int i, h = 0, m = 0, f = 0;
	
	for(i=1; i<=100; i++) {
		
		// Input cause type
		printf("Enter the Cause Type :");
		scanf(" %c",&type);
		
		if(type == 'P')
		break;
		
		switch(type) {
			
			case 'H' :
				fee1 += 1500.00;
				h += 1;
				break;
				
			case 'M' :
				fee2 += 2000.00;
				m += 1;
				break;
				
			case 'F' :
				fee3 += 2500.00;
				f += 1;
				break;
				
			default :
				printf("error !!");		
		}
		printf("\n");
	}
	
	printf("Diploma in Hospitality Management course number of registered Students %d and Total registration fee is : %.2f\n",h,fee1);
	printf("Diploma in Marketing course number of registered Students %d and Total registration fee is : %.2f\n",m,fee2);
	printf("Diploma in Finance course number of registered Students %d and Total registration fee is : %.2f\n",f,fee3);
	
	return 0;
}
