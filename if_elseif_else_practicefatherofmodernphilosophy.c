#include <stdio.h>
int main(){

	char fname[60],mname[60],lname[60],syear[50],no_1answer[50],no_2answer[50],no_3answer[50];
	
	
	printf("\nEnter your Full Name(First,Middle,Last Name): ");
	scanf("%s",&fname);
	scanf("%s",&mname);
	scanf("%s",&lname);
	printf("\nEnter your School year and program(ex:BSIT-1A): ");
	scanf("%s",&syear);

	printf("\n\nEnter the CAPITAL letter of the correct answer.\n");
	printf("\t1. Who is the father of Modern Philosophy?");
	printf("\n\tA. Rene Descartes");
	printf("\n\tB. Plato");
	printf("\n\tC. Socrates");
	
//	printf("\nEnter the capital letter of the correct answer.");
	
	printf("\nWhat's your answer?\n\t");
	scanf("%s",&no_1answer);
	
	if(strcmp(no_1answer,"A")==0){
		printf("Your answer is CORRECT!\n");
	}else if(strcmp(no_1answer,"B")==0){
		printf("You deserve a smack on the butt, you're wrong!\n");
	}else if(strcmp(no_1answer,"C")==0){
		printf("You got mistake dear, fvck off quit schooling!\n");
	}else{
		printf("Are you daydreaming Kid!\n");
	}
	printf("\n");
	printf("\n\t2. What is the name of the inventor of the telecope?");
	printf("\n\tA. Galeleo Galili");
	printf("\n\tB. Galili Galeleo");
	printf("\n\tC. Socrates");
	
	printf("\nYour answer is?\n\t");
	scanf("%s",&no_2answer);
	printf("\n");
	if(strcmp(no_2answer,"A")==0){
		printf("Your answer is CORRECT!\n");
	}else if(strcmp(no_2answer,"B")==0){
		printf("You deserve a smack on the butt, you're wrong!\n");
	}else if(strcmp(no_2answer,"C")==0){
		printf("You got mistake dear, fvck off quit schooling!\n");
	}else{
		printf("Are you daydreaming Kid!\n");
	}
	
	printf("\n\t3. Enumerate the 4 components of philosophy (MALE-must be from M,A,L,E).");
//	printf("\n\tA. Rene Descartes");
//	printf("\n\tB. Plato");
//	printf("\n\tC. Socrates");
	
//	printf("\nEnter the capital letter of the correct answer.");
	
	printf("\n\tWhat's your answer?\n\t");
	scanf("%s",&no_3answer);
	
	if(strcmp(no_3answer,"Metaphysics,Axiology,Logic,Epistemology")==0){
		printf("\nYour answer is CORRECT!\n");
	}else if(strcmp(no_3answer,"metaphysics")==0){
		printf("\n1 point!\n");
	}else if(strcmp(no_3answer,"Meta-physics,Axiology,Logic,Epistemology")==0){
		printf("\nYou got the best answer!\n");
	}else{
		printf("Are you daydreaming Kid!\n");
	}
	

	return 0;
}
