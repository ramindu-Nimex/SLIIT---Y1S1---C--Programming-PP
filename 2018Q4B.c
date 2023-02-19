#include <stdio.h>
#include <string.h>

int main(void){
	
	// variable declare
	char number[50];
	char num[50];
	char name[50];
	int flag = 0;
	int attendace[7];
	int i, count;
	
	FILE *cfptr; // create file pointer
	cfptr = fopen("attendance.dat","r"); // open file for reading
	
	if(cfptr == NULL){
		printf("Cannot open the file \n");
		return -1;
	}
	
	// Input employee number
	printf("Enter the employee number to check total number of attence: "); // prompt
	scanf("%s",number);
	
	fscanf(cfptr,"%s %s",num,name); // Read num and name from the file
	
	while(!feof(cfptr)){
		
		count = 0;
		
		for(i=0;i<7;i++){
				
			fscanf(cfptr,"%d",&attendace[i]); // Read attendance from the file
				
			if(attendace[i] == 1){
				count++;
			}
		}
		if(strcmp(number,num) == 0){
			
			break;
			
		}
		
		
		fscanf(cfptr,"%s %s",num,name);
	}
	
	// display number of attendance
	printf("Number of attendance is %d",count);
	
	fclose(cfptr); // file close
	
	return 0;
}
