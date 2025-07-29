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
	
	if (strcmp(g,"male")){
		if (strcmp(g,"Male")){
			if (strcmp(g,"m")){
				if (strcmp(g,"M")){
					printf("Good Day Sir!");
				}
			}
		}
	}else{
		printf("Good Day Madam!");
	}
	char psw[60];
	/*hugaw sya sir pero kasi i don't know where to put and what to do huhu*/
	printf("\n\nYour password must be qualified to the following criterias:\n1. Characters must be 8 above\n2. Contains at least 1 number/digit\n3. Contains 1 UPPERCASE\n4. Contains at least 1 Vowel letter\n5. Conatins 1 special Character\n6. Must not use keywords such as: pass, password or 123");
	
	printf("\n\nPlease enter your password:");
	scanf("%s",&psw);
	
	printf("\nHint:password");
	if (psw[0]=='P'){
		if (psw[1]=='@'){
			if (psw[2]=='s'){
				if (psw[3]=='s'){
					if (psw[4]=='w'){
						if (psw[5]=='o'){
							if (psw[6]=='r'){
								if (psw[7]=='d'){
									if (psw[8]=='0'){
										if (psw[9]=='1'){
											printf("\nPassword Unlocked! Welcome to Cloud 9!"); /*This password I'm using was our late password in our ComLab02 Computers back in SHS*/
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}else{
		printf("\nSomething went wrong. Please try again.");
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

