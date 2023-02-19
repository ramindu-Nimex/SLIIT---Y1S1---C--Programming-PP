#include <stdio.h>

int main(void){
	
	// variable declare
	char number[25];
	char name[50];
	int attendance[7];
	int i,j;
	
	FILE *cfptr; // create file pointer
	cfptr = fopen("attendance.dat","w"); // create and open file for writing
	
	if(cfptr == NULL){
		printf("Cannot open the file \n");
		return -1;
	}
	
	for(i=1;i<=2;i++){
		
		// Input  Employee id number
		printf("Enter employee id : "); // prompt
		scanf("%s",number);
		
		// Input Employee name
		printf("Enter employee name : "); // prompt
		scanf("%s",name);
		
		fprintf(cfptr,"%s \t%s ",number,name); // write Numbers and name to the file
		
		for(j=0;j<7;j++){
			
			// Input attendance
			printf("Enter the attendace of day %d : ",j+1); // prompt
			scanf("%d",&attendance[j]);
			
			fprintf(cfptr,"%d ",attendance[j]); // write attendance to the file
		}
		
		printf("\n");
		fprintf(cfptr,"\n");
		
	}
	
	fclose(cfptr); // file close
	
	
	return 0;
}
