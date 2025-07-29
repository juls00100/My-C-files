//Campaner
#include<stdio.h>
	int main (){
		
	int overdue, x, b1, b2, b3;
	float tot;
	
		printf("Enter number of overdue books: ");
		scanf("%d", &overdue);
		
		printf("Enter days late for book1: ");
		scanf("%d", &b1);
		
		printf("Enter days late for book2: ");
		scanf("%d", &b2);
		
		printf("Enter days late for book3: ");
		scanf("%d", &b3);
		
		printf("\n");
		
			for (x = 3; x <= overdue; x++){
				printf("\nEnter number of overdue books %d: ", x);
				tot = b1 + b2 + b3;
				printf("\nTotal late fees: %.2f",tot);
			}
		}
