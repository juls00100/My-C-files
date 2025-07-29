#include<stdio.h>
int main(){

	char name[10];
	int rate,room,hour,deposit;
	double totr;
		
	printf("\nRoom Reservation");
	
	printf("\nRoom Rate:");
	scanf("%d",&rate);
	
	printf("\nEnter Name:");
	scanf("%s",&name);
	
	printf("\nEnter Room:");
	scanf("%d",&room);
	
	printf("\nEnter Hour:");
	scanf("%d",&hour);
	
	totr=hour*500;
	printf("\nTotal Rate: %d,totr");
	printf("\nEnter deposit:");
	scanf("%d",&deposit);
	
	printf("\nReceipt:");
	printf("\nName:%s",name);
	printf("\nRoom:%d",room);
	printf("\nRemainng Balance:%d,totr=deposit");
}
	
	
	

