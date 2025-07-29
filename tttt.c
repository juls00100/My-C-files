#include <stdio.h>
#include <string.h>
int main(){
	
	int x,id,num,total;
	char name[50],remarks[50],response[30];
	double prelim,mid,pref,final,average;
	
	do{
	printf("Enter number of students(this doesn't matter,enter any number): ");
	scanf("%d", &num);
	
	
	for(x=1;x<=num;x++){			//We comment this to prevent stopping

	printf("Enter Student ID:");
	scanf("%d",&id);

	printf("Enter Student Name:");
	scanf("%s",&name);
	
	printf("Enter Prelim Grade:");
	scanf("%lf",&prelim);
	
	printf("Enter Mid-Term Grade:");
	scanf("%lf",&mid);
	
	printf("Enter Prefinal Grade:");
	scanf("%lf",&pref);
	
	printf("Enter Final Grade:");
	scanf("%lf",&final);
	
	printf("\n");
	
	total= prelim+mid+pref+final;
	printf("The total is %d.\n",total);
	average= total/4;
	printf("Your final grade (GWA) is %.2lf.\n",average);
	
	
	if (average<=0&&average<75){
		printf("\nYou Failed.\n");
	}	
	else if (average>=75&&average<=90){
		printf ("\nYou're Lucky to PASS!\n");
	}	
	else if (average>=91&&average<=100){
		printf("\nYou nailed it! Perfect kid. You're excellent!\n");
	}	
	else{
		printf("\nInput is UNKNOWN!!...\n");
	}
		printf("Do you want to contiue or add more(yes/no)?");
		scanf("%s",&response);
		
		system("cls");
		
		}
		} while (strcmp (response, "yes" )==0|| response, "YES" ==0 || response, "Yes" ==0);
			printf("WAITING TO SEE YOU SOON!");

//			printf("Both have the average grade of %.2lf.",average);

	}
	
	

