	#include <stdio.h>
	int main()
	{
    
    char name[30];
    int room, rate,hours;
    float texpense;
    
    printf("Room Reservation");
    
    printf("\nEnter Customer's Name:");
    scanf("%s",&name);
    printf("Enter Room:");
    scanf("%d",&room);
    printf("Room Rate/Hour:");
    scanf("%d",&rate);
    
    printf("Enter hours:");
    scanf("%d",&hours);
    
    texpense=rate*hours;
   // printf("Total Expense:%.2lf",texpense);
    printf("Your total expense is %.2lf.",texpense);
    
    }