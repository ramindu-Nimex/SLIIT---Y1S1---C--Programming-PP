#include <stdio.h>
int main() {
	
	// variable declare
	int ratings[3][4];
	int i, j, rate, maxM;
	float avg = 0.0, max = 0.0;
	
	// outer for loop
	for(i=0; i<3; i++) {
		
		printf("Movie %d\n",i+1);
		// inner for loop
		for(j=0; j<4; j++) {
			
			// Read the Movie Rating
			printf("Ratings %d :",j+1);
			scanf("%d",&ratings[i][j]);
		}
		printf("\n");
	}
	
	printf("\tReviewers_1\tReviewers_2\tReviewers_3\tReviewers_4\n");
	for(i=0; i<3; i++) {
		
		printf("Movies%d ",i+1);
		for(j=0; j<4; j++) {
			// store the Movie Rating
			printf("\t%d\t",ratings[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<3; i++) {
		
		for(j=0; j<4; j++) {
			
			rate += ratings[i][j];
		}
		avg = rate/2;
		
		if(max < avg) {
			
			max = avg;
			maxM = i+1;
		}
		printf("Average rating %d is %.2f\n",i+1,avg); // display the movie number and average rating
		
		rate = 0;
	}
	printf("\nmaximum avg of ratings was in movie %d with %.2f\n",maxM,max); // display the movie which recieved highest average rating
	
	return 0;
}
