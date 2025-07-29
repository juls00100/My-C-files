	#include <stdio.h>
	#include<string.h>
	int main (){
		
		int x,id,nu;
		char name[50];
		int pre,mid,pref,fin,respo;
		float ave;
		
		do{
			
		printf("Enter number of students you want to record:");
		scanf("%d",&nu);
		
		
		for (x=1;x<=nu;x++) 
		{
		printf("\nStudent %d ID:",x);
		scanf("%d",&id);
		
		printf("Enter Student's Name:");
		scanf("%s",&name);
		
		printf("Enter Prelim Grade:");
		scanf("%d",&pre);
		
		printf("Enter Midterm Grade:");
		scanf("%d",&mid);
		
		printf("Enter Prefinal Grade:");
		scanf("%d",&pref);
		
		printf("Enter Final Grade:");
		scanf("%d",&fin);

	//	printf("\nOutput:");
	//	printf("\n_____________________________");
/*	printf("\n---------------------------");
		printf("\nGrade Slip:");
		printf("\n---------------------------");
		printf("\nStudent Name:%s",name);
		printf("\nID: %d",id);
		*/
		ave=pre+mid+pref+fin;
}
		
		if (ave >=75) {
			printf("STATUS: Passed");
		}else{
			printf("STATUS: Failed");
		}
		printf("\nTotal Average: %.2f",ave/4);
 
	
	system("cls");
		
		printf("\n\nDo you want to enter another? (Click 0 if YES, 1 if NO) ");
		scanf("%d", &respo);
		
		
	}while (respo==0);
	printf("\n\nThank you and see you around!")
		;
		

		
	}
