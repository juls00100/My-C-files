	#include <stdio.h>
	#include<string.h>
	int main()
	{
	
	char name[60], response[70]/*, mname[60],lname[60]*/;
	int x, snum,math,science,english,computer;
	int mark,average=0;
	float sum,caverage;
	
	do{
		printf("\nEnter the number of students you want to compute:");
		scanf("%d",&snum);
     /*   scanf("%s",&mname);
		scanf("%s",&lname);*/
		
	
		
		for(x = 1; x <= snum; x++){
		
//		printf("\nEnter MARKS in student %d\n", x);
		
		printf("\nEnter the student %d's name:", x);
		scanf("%s",&name);

		printf("Mathematics:");
		scanf("%d",&math);
		
		printf("Science:");
		scanf("%d",&science);
		
		printf("English:");
		scanf("%d",&english);
		
		printf("Computer Engineering(major):");
		scanf("%d",&computer);
		
		mark=0;average=0;
    	mark= math+science+english+computer;
		average=mark/4;
		
		printf("------------------------------");
		printf("\nTotal Marks: %d", mark);
		printf("\nAverage:%d\n", average);
		printf("------------------------------");
		sum = sum + average;
		}
	
	//	printf("------------------------------");
	//	printf("\nStudent Name:%s",name);
	//	printf("\nTotal Marks: %d", mark);
	//	printf("\nAverage:%d", average);
		printf("\n");
		caverage = sum / snum;
	
		//sum=sum+;
		//caverage=sum+snum;
		
		printf("\nClass average:%.2f",caverage);
		
		//system("cls");
		printf("\nDo you want to continue? (yes/no): ");
		scanf("%s", &response);
	}
	while (strcmp (response,"yes") == 0||strcmp (response,"yes") == 0||strcmp (response,"Yes") == 0);
	printf("Thank you for using my app, See you soon!");
	}
	
    
