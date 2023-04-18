#include<stdio.h>
#include<string.h>

int main()
{
	// variable declare
	int i,count=0;
	char number[20];
	char name[20],searchName[20];
	
	FILE *fp; // create file pointer
	fp=fopen("Directory.dat","w"); // create and open file for writing
	
	if(fp==NULL) {
	
		printf("error");
		return -1;
	
	}
	 
	for(i=0;i<=4;i++) {
		
		// input name
		printf("Enter your name :"); // prompt
		scanf(" %20s",name);
		
		// input phone number
		printf("Enter your number:"); // prompt
		scanf(" %20s", number);
		
		fprintf(fp,"%s\t%s\n",name,number); // write name and number to the file
		printf("\n");
	}
	fclose(fp);// close file
	
	fp=fopen("Directory.dat","r"); // open file for reading
	
	// search name
	printf("Enter name which you want to search:");
	scanf(" %20s",searchName);
	
	fscanf(fp,"%s%s",name,number); // read the name and number from the file
	
	while(!feof(fp))
	{
		
		
		if(!strcmp(name,searchName)) {
	
			printf("Number is : %s",number);
			count = 1;
			break;
		}
	fscanf(fp,"%s%s",name,number); // read the name and number from the file
	}
  if(count!=1)
{ printf("\nInvalid number");
		}		
			
	fclose(fp);	// file close	
			
	return 0;		
}
