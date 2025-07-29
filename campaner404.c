#include<stdio.h>
//total due 404
int main(){
	 int x, pro,num,  sum,cash;
	 float average, change;

		printf("Enter no. of Products: ");
		scanf("%d", &pro);
	

		printf("\n");
		
		
		for(x=1; x<=pro; x++){
			
			printf("Enter price for product %d:");
			scanf("%d", &num);
			
			sum=sum+num;	
		}
		
		printf("\nYour total due is %d",sum);
		printf("Enter Cash:");
		scanf("%d",&cash);


		printf("\n");
	
		
		while(cash <= sum){
			printf("Insufficient Cash, Try Again: ");
			scanf("%d", &num);
			}
		change=cash-sum;
		printf("Your change is %.2f",change);

//		average = sum / num;
//		printf("\nClass Average: %.2f", average);
}
