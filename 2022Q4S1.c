#include<stdio.h>
int main(void) {
	
	FILE *cfPtr; // create file pointer
   cfPtr=fopen("answers.dat","w"); // create and open file for writing
   
   // variable declare
   char studentid[8];
   int answer1, answer2, answer3, answer4, i, correct=0;
   
   	if(cfPtr == NULL){
		printf("Fail to create file\n");
		return -1;
	}
   
   for (i=0 ;i<5;i++){
   	
   	// Input student ID
   	printf("\nEnter student id : "); // prompt
   	scanf("%s",&studentid);
   	
   	// Input answer of Question 1
   	printf("Enter answer  1  questions : "); // prompt
   	scanf("%d",&answer1);
   	
   	// Input answer of Question 2
   	printf("Enter answer  2  questions : "); // prompt
   	scanf("%d",&answer2);
   	
   	// Input answer of Question 3
   	printf("Enter answer  3  questions : "); // prompt
   	scanf("%d",&answer3);
   	
   	// Input answer of Question 4
   	printf("Enter answer of 4  questions:");
   	scanf("%d",&answer4);
   	
   	// write student ID and MCQ answers to the file
   	fprintf(cfPtr,"%s\t\t%d %d %d %d\n",studentid,answer1,answer2,answer3,answer4);
   }
   	fclose(cfPtr); // file close
	
	
	cfPtr=fopen("answers.dat","r"); // open file for reading
	
	printf("\n"); // new Line
	
	printf("correct answers\n");
	
	while(!feof(cfPtr)){
		
		// read student ID and MCQ answers from the file
		fscanf(cfPtr,"%s %d %d %d %d ",&studentid,&answer1,&answer2,&answer3,&answer4);
		
		if(answer1==1){
		   	correct += 1;
	    }
	    if(answer2==4){
	    	correct += 1;
		}
		if(answer3==2){
			correct += 1;
		}
		if(answer4==3){
			correct += 1;
		}
		  
        printf("%s\t%d\n",studentid,correct); // display student ID and correct answers for each students
        correct = 0;

	}
	
	fclose(cfPtr); // file close
	
}
