#include<stdio.h>
    int main (){ 
    
    int afi, csh;
    float g;
    
        printf("Enter your GPA: ");
            scanf("%f",&g);
    
        printf("enter annual family Income: ");
            scanf("%d",&afi);
    
        printf("enter community service hours: ");
            scanf("%d",&csh);
            

    if(g >= 1 && g <= 3.5){
        if(afi <= 400000 && afi >= 1000){
            if(csh >= 50){
                printf("\nCongrats fellow scholar!");   
            }else{
                if(csh < 50){
                    printf("\nNeeds more community service!");
                }    
            }
    }else{
        if(afi > 400000){
            printf("\nAnnual too big!");
        }else{
            printf("\n Annual enough");
            }
        }
     }else{
          if(g > 3.5){
            printf("\nYOUR GPA NEEDS FOLLOW UP!!");
        }else{
            printf("\ngrade enough!");
        }
    }
   
}
    
