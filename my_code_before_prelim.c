#include <stdio.h>
int main (){
	
	// use if, if else, else if, nested if
	//we use strcmp when we have characters in conditional statements
	
	int num1;
	
	printf("Enter your Number:");
	scanf("%d",&num1);
	
	if (num1>0&&num1<=74){
		printf("Failed to this subject!!");
	}else if(num1>=75&&num1<=80){
		printf("You have passed!");
	}else if(num1>=81&&num1<=85){
		printf("You are good!");
	}else if(num1>=86&&num1<=90){
		printf("You are very good!");
	}else if(num1>=91&&num1<=95){
		printf("You are Average with Honors!");
	}else if(num1>=96&&num1<=100){
		printf("You are Excellent enough Mr. Smart!");
	}else{
		printf("Your number is very high. Are you still a human?");
	}
	
	return 0;
}
