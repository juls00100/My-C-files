#include<stdio.h>
int main(){
	char product[50];
	int price,quan,cash;
	double total_due,change;
	
	printf("Enter Product Name:");
	scanf("%s",&product);
	
	printf("Enter Product Price:");
	scanf("%d",&price);
	
	printf("Enter Product Quantity:");
	scanf("%d",&quan);
	
	printf("\n---------------------");
	printf("\nPURCHASE DETAILS");
	printf("\n---------------------");
	printf("\nProduct Name:%s",product);
	total_due=price*quan;
	printf("\nTotal Due:%.2lf",total_due);
	printf("\n---------------------");
	
	printf("\nEnter Cash from the customer:");
	scanf("%d",&cash);
	
	printf("\nEnter Cash from Customer:%d",cash);
	printf("\n---------------------");
	change=cash-total_due;
	printf("\nCHANGE:%.2lf",change);
	printf("\n---------------------");	
	return 0;
}
