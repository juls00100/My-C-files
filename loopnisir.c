#include <stdio.h>

int main(){
	
	int x,num;
	float tot,books,sum;
	
	printf("Enter no. of Overdue Books:");
	scanf("%d",&num);
	
	printf("\n");
	
/*	while(num>50){ //if ni sya pag-una tas gichange to while to block the user until mag input ug exact
		printf("Maximum limit is 50! Try Again:");
		scanf("%d",&num);
	}*/
	
	for(x=1; x<=num;x++){ //we go "for" kay what if daghan kag encodon tas daghan sab ug printf diba?
		printf("Enter number of overdue books %d:\n",x); //we use %d because we refer to x=1 
		scanf("%d",&books);	
	
	}			sum=sum+books;	

	printf("Number of books:%d",num);
	printf("\nTotal Late fees: PHP %.2f",sum+books);
	
	
	
	
}
