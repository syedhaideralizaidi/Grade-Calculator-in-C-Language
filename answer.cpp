#include <stdio.h>
int main(void){
int num1,num2,num3,average,no_student;

printf("Enter number of student \n ");
scanf("%d",&no_student);



int count=0;

 while(count<no_student)
 {
	printf("\n Checking grade for student %d\n",count+1);
	printf("Enter your mark1: \n ");
	scanf("%d",&num1);
	printf("Enter your mark2: \n ");
	scanf("%d",&num2);
	printf("Enter your mark3: \n ");
	scanf("%d",&num3);
	average=(num1+num2+num3)/3;
	if(average>= 90){
	printf(" You got A grade"); // printing outputs
		}
	else if ( average >=70 && average<=90){
		if(num3>90)
		{
		  
		printf(" You got A grade");
		}
		else
		{
			printf(" You got B grade");
		}
	}
	else if ( average>=50 && average<=70){
		int average2=(num2+num3)/2;
		if(average2>70)
		{
		printf(" You got C grade");
		}
		else
		{
			printf(" You got D grade");	
		}
	}
	else if ( average< 50){
		printf(" You got F grade");
		}
		count++;
	}
	
	
	return 0;
}
