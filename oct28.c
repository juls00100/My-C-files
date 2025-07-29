#include <stdio.h>


double getAverage(int a, int b, int c);

int main(){
printf("Average of 5,9,10 is %.2lf", getAverage(5,9,10));	

}
double getAverage(int a, int b, int c){
	double ave=(a+b+c)/3;
	return ave;
}
*/

int x=10; //this is the global variable since this is declared out of the functions
double getAverage(int a, int b, int c);

int main(){
	double ave; //this is a local variable since they are declared inside the function
printf("Average of 5,9,10 is %.2lf", getAverage(5,9,10));	

}
double getAverage(int a, int b, int c){
	double ave=(a+b+c)/3;
	return ave;
}
*/

void evaluategrade(double average);
double gradeCalc(int s1, int s2, int s3);
void displayG(double ave, char name[10]);

void evaluategrade(double average){
	if(average>=75)
	{
		printf("\nPassed!");
	}
	else
	{
		printf("Failed!");
	}
}

double gradeCalc(int s1, int s2, int s3)
{
	double average=(s1+s2+s3)/3;
	return average;
}

void displayG(double ave, char name[10])
{
	printf("Hello %s, your grade is %.2lf",name,ave);
	evaluategrade(ave);
}
int main(){
	 displayG (gradeCalc( 75, 75, 75), "Mike");
}
*/
/*
void evalLoan(int loan){
	
	if(loan<=50)
	{
		printf("\nApproved!");
	}
	else
	{
		printf("\nRejected!");
	}
}
double calcLoan(int salary, int loan)
{
	double percentage=(loan/salary)*100;
	return percentage;
}

void displayAll(double evalLoan)
{
	evaluategrade(loan);
}

int main(){
	int salary;
	int load;
	
	printf("Enter Salary:");
	scanf(%d,&salary);
	
	printf("Enter loan amount:");
	scanf(%d,&loan);
	
	
	
}
*/
	void evaluategrade(double average);
	double gradeCalc(int s1, int s2, int s3);
	void displayG(double ave, char name[40]);
	
	void evaluategrade(double average){
		if(average>=75)
		{
			printf("\nPassed!");
		}
		else
		{
			printf("Failed!");
		}
	}
	
	double gradeCalc(int s1, int s2, int s3)
	{
		double average=(s1+s2+s3)/3;
		return average;
	}
	
	void displayG(double ave, char name[40])
	{
		printf("Hello %s, your grade is %.2lf",name,ave);
		evaluategrade(ave);
	}
	int main(){
		char name[40];
		int x,grade;
	
	printf("Enter your name:");
	scanf("%s",&name);
		for(x=1;x<=3;x++){
		printf("Enter your grade:",x);
		scanf("%d",&grade);
	}
		 displayG (gradeCalc(grade,grade,grade), name);
	}


