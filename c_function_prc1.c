#include<stdio.h>
//int main(){
	int a, b,c;
//	int getSum(int a, int b, int c);
	double getAve(int total);
	int main(){
	
	printf("This is made to calculate the average:");
	printf("\n\nEnter grade for A:");
	scanf("%d",&a);
	printf("Enter grade for B:");
	scanf("%d",&b);
	printf("Enter grade for C:");
	scanf("%d",&c);
		
		printf("\nTotal Average = %.2lf", getAve(getSum(a,b,c)));
		
	}
	int getSum(int a, int b, int c){
	
	int sum= a+b+c;
	if (sum>0&&sum<75){
		printf("\nYou losser!");
	}else{
		printf("\nThe best!");
	}
	return sum;
	}
	
	double getAve(int total){
	double ave= total/3;
	return ave;
}
/* 3rd	char nm[200];
	int by;
*/	
	//1st sayHello();
	/*2nd printf("sum=%d",getSum(10,8));
	printf("\nSum=%d",getSum(5,6));
	*/
	
	/*3rd  printf("Enter your name:");
	scanf("%s",&nm);
	printf("Enter your birth year:");
	scanf("%d",&by);
	getName(nm);
	printf("\nAge is %d",ageCalc(by));
	*/
	
/*	1st void sayHello(){
	printf("Hello World!");
	}*/
	
/*	2nd	int sum;
	int getSum(int a, int b){
		sum= a+b;
		return sum;
	}
*/
/*	3rd int ageCalc(int by){
		int curr=2024;
		int age =curr - by;
		return age;
	}
	void getName(char name[200]){
		printf("\nName: %s", name);
	}
	*/
	
