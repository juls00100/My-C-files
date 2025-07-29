	//Program: the functions of c programming
	//Written by: Julios S. Campaner
	//Date Written: 10-14-24
	//Purpose: e suway nakog mo run ba ang code ni sir
	#include<stdio.h>
	//#include<string.h>
	
	int main()
	{
		char nm[90];
		int by;
		
	/*JuliosGwapo*/
	printf("Enter your name:");	/*Enter Someting*/
	scanf("%s",&nm);
	printf("Enter your birth year:");	/*Enter Someting*/
	scanf("%d",&by);
	getName (nm);
	printf("\nAge is %d.",ageCalc(by));
}

	int ageCalc(int by){
		int curr=2024;
		int age=curr-by;
		return age;
	} 
	void getName(char nm[90]){
		printf("\n Name:%s", nm);
	}
/*	if (){
	printf("");
	}else if(){
	printf("");
	}else{
	printf("");
	}
*/	  

	
	/***********************************/
	/*Nested if:
	}if (){
	}if(){
	printf("");
	}else{
	printf("");
	}
	}
	*/
	/*unsigned char - values 0-255
	unsigned int - 0-65,535
	/*ALWAYS REMEMBER TO ALWAYS TO CHECK THE CODE(RUN) EVERY INPUT YOU MAKE IN EVERY CONDITION*/
	/***********************************/

