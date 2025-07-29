	//Program: password_program_reYAL
	//Written by: Julios S. Campaner
	//Date Written: 09-18-24
	//Purpose: PROGRAM A PASSWORD 
	
	/*CRITERIAS: 
	1. Characters must be 8 above
	2. Contains at least 1 number/digit
	3. Contains 1 UPPERCASE
	4. Contains at least 1 Vowel letter
	5. Conatins 1 special Character
	6. Must not use keywords such as: "pass", "password" or "123"
	*/
	/*Here i use my own pasword that is based on criteria example: oce@nDe3p24 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		
	char g[29];
	
	printf("Enter your gender:");	/*We should first know the gender to address them and prevent us standing for 2 hours*/
	scanf("%s",&g);
	
	if (strcmp(g,"male")||(g,"Male")||(g,"m")||(g,"M")==0){
				printf("Good Day Sir!");
					}else{
				printf("Good Day Madam!");
		}
	
	char psw[60];
	printf("\nPlease enter your password(hint:oceandeep24):");
	scanf("%s",&psw);
	
	if (strcmp(psw,"oce@nDe3p24")==0){
		printf("SUCCESS!");
	}else{
		printf("Wrong Password!");
	}
	


/*	printf("Please Enter your password:");	/*Enter Someting*/
/*	if (strcmp()==0){
	}else if(){
	printf("");
	}else{
	printf("");
	}*/
	    
	    return 0;
	}
	
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
	/*ALWAYS REMEMBER TO ALWAYS TO CHECK THE CODE(RUN) EVERY INPUT YOU MAKE IN EVERY CONDITION*/
	/***********************************/

