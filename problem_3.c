#include <stdio.h>
int main(){
	
	int ucon, rate;
	double totaldue;
	
	printf("\nEnter Units Consumed:");
	scanf("%d",&ucon);
	
	printf("Enter Rate per Unit:");
	scanf("%.2lf",&rate);
	
	//OUTPUT
	
	printf("\nOutput:");
	printf("\n");
	printf("\nELECTRIC BILL");
	printf("\n-------------------");
	printf("\nUnit Consumed:%d",ucon);
	printf("\n-------------------");
	
	
	printf("\nEnter Units Consumed:%d",ucon);
	printf("Enter Rate per Unit:",rate);
	
	totaldue=ucon*rate;
	printf("\nTotal Due:%lf",totaldue);
	
//	printf("\n-------------------");
//	printf("");
//	printf("");
//	printf("");
//	printf("");
//	printf("");
//	printf("");
//	printf("");
	
	return 0;
}
