		#include <stdio.h>
		int main (){
			int id;
			char name[70],date[60],time[40];
		    float duration[50];
			
			printf("\nInputs:");
			printf("\nEnter Patient ID:");
			scanf("%d",&id);
			
			printf("Enter Patient's Name:");
			scanf("%s",&name);
			
			printf("Enter Appointment Date(MM-DD-YYYY):");
			scanf("%s",&date);
			
			printf("Enter Appointment Time(HH:MM AM/PM):");
			scanf("%s",&time);
			
			printf("Duration of Appointment(in minutes):");
			scanf("%lf",&duration);
			
			printf("\n----------------------------------");
			printf("\nOutput:");
			printf("\n----------------------------------");
			
			printf("\nConfirmaton:Appointment for %s is confirmed on %s from %s in %.2f minutes.",name,date,time);
			return 0;
			
			
		}
