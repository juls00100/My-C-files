#include  <stdio.h>
int main()
{
	
	char fname[60], lname[60];
	int math,science,english,computer,understanding;
	int total_Mark,average;
	
	printf("\nEnter Your full name:");
	scanf("%s",&fname);
	scanf("%s",&lname);
	
	printf("\nEnter Marks in");
	
	printf("\nMath:");
	scanf("%d",&math);
	
	printf("\nScience:");
	scanf("%d",&science);
	
	printf("\nEnglish:");
	scanf("%d",&english);
	
	printf("\nComputer:");
	scanf("%d",&computer);
	
		printf("\nUnderstanding:");
	scanf("%d",&understanding);
	
	total_Mark= math+science+english+computer+understanding;
	average=total_Mark/5;
	
	printf("-----------------------------------");
	printf("\nStudent Name: %s %s",fname,lname);
	printf("\nTTotal Marks: %d", total_Mark);
	printf("\nAverage: %d", average);
	
	
	
	
}
