#include <stdio.h>
int main(){
	char n[40],fcolor[40],zsign[40];
	int byear;
	
	
	printf("Enter your Name:");
	scanf("%s",&n);
	
	printf("\nWhat is your favorte color?");
	scanf("%s",&fcolor);
	
	printf("\nWhat is your Zodiac Sign?");
	scanf("%s",&zsign);
	
	printf("\nEnter your Birth Year:");
	scanf("%d",&byear);
	
	printf("\n-----------------------------------");
	printf("\nHello %s!",n);
	printf("\nYour favorite color is %s.",fcolor);
	printf("\nYour Zodiac Sign is %s",zsign);
	printf("\nYour age is %d!", 2024-byear);	
	

	
	
}
