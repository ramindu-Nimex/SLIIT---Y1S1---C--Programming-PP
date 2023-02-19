#include<stdio.h>
int main() {
	
	// variable declare
    int userRating[5] ={0},number,i;

    while(number != -99) {
    	
    	// Input Ratings
        printf("Enter Rating (1 to 5) :"); // prompt
        scanf("%d", &number);
        
        switch (number) {
        
            case 1 : userRating[0] = userRating[0] +1;
                     break;
            case 2 : userRating[1] = userRating[1] +1;
                     break;
            case 3 : userRating[2] = userRating[2] +1;
                     break;
            case 4 : userRating[3] = userRating[3] +1;
                     break;
            case 5 : userRating[4] = userRating[4] +1;
                     break;

        }

    }
    printf("\n");
    // display ratings
    for(i=0; i<5; i++) {
    	
    	printf("%d ",i+1);
    	while(userRating[i] > 0) {
    		
    		printf("*");
    		userRating[i]--;
		}
		printf("\n");
	}
	return 0;
}
