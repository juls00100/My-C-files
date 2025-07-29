//Program: gradewithconditional_passed_or_not
//Written by: Julios S. Campaner
//Date Written: 09-18-24
//Purpose: to know if i can survive with this fuckin' course that i thought such an easy fck!
#include  <stdio.h>
int main()
{
	
	char name[60];
	int math,science,history,s_studies;
	int total_Mark;
	float average;
	
	printf("\nEnter student's name:");
//	scanf("%s",&fname);
	scanf("%s",&name); /*if you fail, you die*/
	
//	printf("\nEnter Marks in");
	
	printf("Enter Marks in Math:");
	scanf("%d",&math);
	
	printf("Enter Marks in Science:");
	scanf("%d",&science);
	
	printf("Enter Marks in History:");
	scanf("%d",&history);
	
	printf("Enter Marks in Social Studies:");
	scanf("%d",&s_studies);
	
	total_Mark= math+science+history+s_studies;
	average=total_Mark/4;
	
	printf("-----------------------------------");
	printf("\nStudent Name: %s",name);
	printf("\nTotal Marks: %d", total_Mark);
	printf("\nPercentage: %.2f", average);
	
	/*	HERE WE GOES CONDITIONALY HAHAHA */
	
	if (average>0&&average<=74){
		printf("\nStatus: Failed\n");
		printf("You have to make bawi mylove");
	}else if(average>=75&&average<=100){
		printf("\nStatus: Passed\n");
		printf("\n");
		printf("Congratulations %s!",name);
	}else{
		printf("\nYour grade is inconsidered by the machine you dumbass!");
	}
	
	return (0);
}
