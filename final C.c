#include <stdio.h>
//this will be a program for my final huhuhu.
//sir gasugod ko ani October 29 pa, syaro wa niy epek pang final nagud ni HAHAHA
int mypin() {
    const int corrpin = 1234;
    int enteredpin;

    do{
	
    printf("\nENTER YOUR PIN: (for new users,use 1234): ");
    scanf("%d", &enteredpin);
    
   if (enteredpin == corrpin) {
        return 1;
    } 		
	}
	while (printf("PIN NOT FOUND PLEASE TRY AGAIN:"));//(enteredpin != corrpin);
 
    

}
void displaymenu() {
    printf("\nWELCOME!PLEASE READ THE FOLLOWING WORDS PROPERLY.");
	printf("\nHERE GOES THE MENU, Please Select:");
    printf("\n\n 1. DEPOSIT\t 2. WITHDRAW\t 3. CHECK BALANCE\t 4. EXIT");
   
}

void deposit(float *balance, float *salary) {
    float amount;
    int response;


    printf("\nENTER YOUR SALARY(monthly): ");
    scanf("%f", salary);
    do{
	
    printf("\nENTER AMOUNT YOU WANT TO DEPOSIT: ");
    scanf("%f", &amount);

    if (amount > *salary / 2) {
        printf("\nTHE AMOUNT YOU ENTER WAS TOO BIG! IT SHOULD BE HALF OR LESS THAN (%.2f)...", *salary / 2);
    } 
 /*   else if (amount < *salary / 2) {
    printf("\nThe amount entered was too small! It should be a half of your salary more!(%.2f).", *salary / 2);
    
  */
    else 
    {
        *balance += amount;
        printf("\nAMOUNT GRANTED!");

        printf("\nDEPOSITED: %.2f", amount);
        printf("REMAINING BALANCE: %.2f",*balance);
        printf("\nDO YOU WANT TO DEPOSIT AGAIN? (1-yes/0-no): ");
        scanf("%d", &response);
    }
}while(response == 1);
    //printf("\nThank you for using the App, See you soon!");
}

void withdraw(float *balance) {
    float amount;
    int response;
    do{
    printf("\nENTER AMOUNT YOU WANT TO WITHRAW: ");
    scanf("%f", &amount);

    if (amount > *balance) {
        printf("\nINSUFFICIENT BALANCE, PUT MORE MONEY.");
    } else {
        *balance -= amount;
        printf("\nWITHRAWN: %.2f", amount);
    }
}while(response == 1);
}

void checkbalance(float *balance) {
    printf("\nYOUR BALANCE NOW IS: %.2f", *balance);
     printf("\n\n");
}
void sendSummary(){
 	
 	printf("\n--------TRANSACTION---------");
 	printf("\n--------------------");
 }
int main() {
    float balance = 0.00, salary;
    int choice,response;

    if (!mypin()) {
        return 0;
    }

    do {
        displaymenu();
        printf("\n\nENTER THE NUMBER YOU WANT TO DO: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            deposit(&balance, &salary);
            break;
        case 2:
            withdraw(&balance);
            break;
        case 3:
            checkbalance(&balance);
            break;
        case 4:
            printf("\nTrying to take exit.....please click enter.");
            break;
        default:
            printf("Do you want to continue? (1-yes/0-no): ");
        	scanf("%d", &response);
        }

    } while (choice != 4); while(response == 1);
    printf("\nGOD BLESS, mwua mwua tsup tsup");

    return 0;
}

 
//needs to put the sumary of transaction
