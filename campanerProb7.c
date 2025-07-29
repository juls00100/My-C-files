//Program: basicstartup
//Written by: Julios Campaner
//Date Written: 09-18-24
//Purpose: para makabawi sa prelim sir hahahh

#include<stdio.h>

int main(){
   
    float gpa;
   	int annual;
   	float comserv;
   	
   	printf("Enter Grade Point Average(GPA): ");
    scanf("%f", &gpa);
   
    printf("Enter Annual Family Income(in PHP): ");
    scanf("%d", &annual);
   
    printf("Enter Community Service Hours: ");
    scanf("%f", &comserv);
    
    if(gpa >= 1 && gpa <= 3.5){
        if(annual <= 400000 && annual >= 1000){
            if(comserv >= 50){
                printf("\nAWARDED!");    
            }else{
                if(comserv < 50){
                    printf("\nDENIED!");
                }    
            }
    }else{
        if(annual > 400000){
            printf("\nDENIED!");
        }else{
            printf("\nDENIED!");
            }
        }
     }else{
          if(gpa > 3.5){
            printf("\nDENIED!");
        }else{
            printf("\nDENIED!");
        }
    }
   
}
    
    
    
   
