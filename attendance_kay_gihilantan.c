#include <stdio.h>
int main(){
	int id,dur;
	char name[50],date[60],time[88];
	
	printf ("Inputs");
	
	printf("\nEnter Patient ID:");
	scanf("%d",&id);
	printf("Enter Patient Name:");
	scanf("%s",&name);
	printf("Enter Appointment Date(MM-DD-YYYY):");
	scanf("%s",&date);
	printf("Enter Appointment Time(AM/PM):");
	scanf("%s",&time);
	printf ("Enter Duration of Appointment(minutes):");
	scanf("%d",&dur);
	
	printf("\nOutput");
	
	printf("\n\nConfirmation: Appointment for %s is confirmed on %s with the duration of %d minutes.",name,date,dur);
	
	return 0;
}
