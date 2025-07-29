#include<stdio.h>
int main(){
	char name[60];
	printf("Enter your stupid name:");
	scanf("%s",&name);
	
	
	double a,b,c,d;
	printf("\nEnter Value of prelim:");
	scanf("%lf",&a);
	printf("\nEnter Value of midterm:");
	scanf("%lf",&b);
	printf("\nEnter Value of prefinal:");
	scanf("%lf",&c);
	printf("\nEnter Value of final:");
	scanf("%lf",&d);
	
	float total=a+b+c+d;
	float average=total/4;
	
	printf("\nYour total grade is %.2f.",total);
	printf("\nThe average is %.2f.",average);
	
	if (average>=3&&average<=5){
		printf("\nYOU FAILED, I'M SORRY!");
		printf("YOU WILL NEVER BE A DEAN'S LISTER WITH THIS GRADE BUT, CONGRATULATIONS YOU GOT FAILING GRADE!");
	}else if(average>=1&&average<=1.9){
		printf("\nYOU PASSED, CONGRATULATIONS!");
		printf("\nAND WITH THIS GRADE YOU'LL BE HAVING THE AWARD DEAN'S LISTER!");
	}else if(average>=2&&average<=3){
		printf("\nYOU GOT IT, CONGRATULATIONS!");
		printf("\nBUT I GUESS DEAN'S LISTER WON'T BE SUITED FOR YOU I'M SORRY BUT STILL CONGRATULATIONS!");
	}else{
		printf("\nYOUR INPUT IS UNACCEPTABLE!");
	}
	
//julios s. campaner
	
	
	return 0;
}
