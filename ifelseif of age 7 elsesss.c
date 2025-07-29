#include <stdio.h>
int main () {
    int b;
    
   // printf("Enter the AGE of a:");
   // scanf("%d",&a);
    
    printf("Enter your AGE:");
    scanf("%d",&b);
    
  //  printf("Enter the AGE of c:");
    //scanf("%d",&c);
    
    //d =b +c;
    printf("\nYOUR ARE %d!.",b);

    if(b<0&&b<=10) {
    printf("\n YOU ARE YOUNG AND NOT A TEEN!");
    }else if(b>=11&&b<=20){
    printf("\nYOU ARE MORE THAN 11 BUT NOT GREATER THAN 20 HAUP!");
	}else if(b>=21&&b<=30){
    printf("\nYOU ARE MORE THAN 21 BUT NOT GREATER THAN 30 HAUP!");
	}else if(b>=31&&b<=40){
    printf("\nYOU ARE MORE THAN 31 BUT NOT GREATER THAN 40 HAUP!");
	}else if(b>=41&&b<=50){
    printf("\nYOU ARE MORE THAN 41 BUT NOT GREATER THAN 50 HAUP!");
    }else if(b>=51&&b<=60){
    printf("\nYOU ARE LESS THAN 51 BUT NOT GREATER THAN 60 HAUP!");
    }else if(b>=60&&b<=90){
    printf("\nHey Senior!");
    }else if(b>=91&&b<=100){
    printf("\nOMG YOU ARE KREYZZZY GOLDEN AGER!");
    }else if(b>100){
    printf("\nYOUR AGE WAS UNACCEPTABLE!");
    }else{
    printf("\nNULL");
    }



//printf ("a =%d",a);
}
