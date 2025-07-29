#include <stdio.h>
int main(){
	int a,b,c,d;
	
	printf("Enter your first quarter grade:");
	scanf("%d",&a);
	
	printf("Enter your second quarter grade:");
	scanf("%d",&b);
	
	printf("Enter your third quarter grade:");
	scanf("%d",&c);
	
	printf("Enter your fourth quarter grade:");
	scanf("%d",&d);
	
	if(a>b){
	
		if(a>c)
		if(a>d)
		{
		printf("Largest is %d",a);
		}
		else
		{
			printf("Largest is %d",d);
		}
	}
	else if (b>c){
		printf("Largest is %d",b);
		}else{
			printf("Largest is %d",d);
	}
	if (c>d)
		{
		printf("Largest is %d",c);
		}
		else
		{
			printf("Largest is %d",d);
		}
	
	
	
	return 0;
}
