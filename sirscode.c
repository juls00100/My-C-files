//Program: basicstartup
//Written by: Julios S. Campaner
//Date Written: 09-18-24

/*Task: Prelim exam 2- Fitness Program Eligibility
Description: Create a program to determine eligibility for a fitness program based on the following criteria:
1. Age: must be between 18 - 40 years old
2. Body Mass Index(BMI): Must be between 18.5 and 24.9
3. Monthly EXercie Hours: Must be at least 10 hours
*/ 

#include<stdio.h>

int main(){
   
    int age;
    float bmi, hours;
   
   
    printf("Enter Age: ");
    scanf("%d", &age);
   
    printf("Enter BMI: ");
    scanf("%f", &bmi);
   
    printf("Enter Hours: ");
    scanf("%f", &hours);
   
    if(age >= 18 && age <= 40){
        if(bmi >= 18.5 && bmi <= 24.9){
            if(hours >= 10){
                printf("\nEligible");    
            }else{
                if(hours < 10){
                    printf("\nNot Eligible (Hours too low)");
                }    
            }
        }else{
            if(bmi > 24.9){
                printf("\nNot Eligible (BMI too high)");
            }else{
                printf("\nNot Eligible (BMI too low)");
            }
        }
    }else{
   
        if(age > 40){
            printf("\nNot Eligible (Age too high)");
        }else{
            printf("\nNot Eligible (Age too low)");
        }
    }
   
   return (0);
}

/*ALWAYS REMEMBER TO ALWAYS TO CHECK THE CODE(RUN) EVERY INPUT YOU MAKE IN EVERY CONDITION*/
