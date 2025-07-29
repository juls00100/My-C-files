#include <stdio.h>
int main () {
//char fn[50]="Joy",ln[50]="Bustamante";
//int age=25;
//printf("Your name is %s %s. Your age is %d.",fn,ln,age);

    char fn[50],ln[60];
    int age;

    printf("What's Your First Name:");
    scanf("%s",&fn);
    printf("What is Your Last Name:");
    scanf("%s",&ln);
    printf("How much is your Age:");
    scanf("%d",&age);
    //printf("Output:");
    printf("\nHello %s %s. \nYour Age is %d.",fn,ln,age);

    if(age>0&&age<=17){
        printf("and you are minor!");
        }else if(age>=18&&age<=60){
        printf("\nYou got big dick! Damn it...");
    }
    else{
        printf("\nThe fuck your age!");
    }

//printf("Hello %s %s your age is %d ", fn, ln, age);
}