#include <stdio.h>
int main(){
	
	int num1,num2,num3,num4;
	
	printf("Enter your number 1:");
	scanf("%d",&num1);
	
	printf("Enter your number 2:");
	scanf("%d",&num2);
	
	printf("Enter your number 3:");
	scanf("%d",&num3);
	
	printf("Enter your number 4:");
	scanf("%d",&num4);
	
	if (num1<num2){
		if(num1<num3){
			if(num1<num4){
				printf("Your number 1 is the lowest!");
			}else{
				printf("Your number 4 is the lowest!");
			}
		}
	}
	else if(num2<num1);{
		if(num2<num3){
			if(num2<num4)
			{
				printf("Your number 2 is the lowest!");
			}
			else
			{
				printf("Your number 4 is the lowest!");
			}
	}	}
	if(num3<num1)
		if(num3<num2){
			if(num3<num4){
				printf("Your number 3 is the lowest!");
			}else{
				printf("Your number 4 is the lowest!");{
	
			}
		}

//	}else if(num4<num1);{
//		if(num4<num3){
//			if(num4<num2)
//			{
//				printf("Your number 4 is the lowest!");
//			}
		//	else
		//	{
		//		printf("Your number 4 is the lowest!");
		//	}
//		} julios c. programming
}
	return 0;
}

	
