#include <stdio.h>
//this will be a program for my final huhuhu.

int mypin() {
    const int corrpin = 1234;
    int enteredpin;

    
    printf("\n\nEnter your pin mastuhrr (for new users,use 1234): ");
    scanf("%d", &enteredpin);
    
    if (enteredpin == corrpin) {
        return 1;
    } else {
        printf("\nincorrect pin. the machine cannot grant your access!");
        return 0;
    }
}

void displaymenu() {
    printf("\n\nhere goes the menu:");
    printf("\n\n1. deposit\t2. withdraw\t3. check balance\t4. exit");
}
    /*do{			// we undergo do while for keeps on asking the enough money until it will give true to execute the end
        printf("Enter number of products: ");
        scanf("%d", &pnum);
		
		total= 0; //always declare for the reptition  of the loop incase you'll do another loop
            for(x = 1; x <= pnum; x++){ //here is the for loop, never forgetti
                printf("Enter price for product %d: ", x);
                scanf("%d", &price);
                
                total = total + price; //in order to get the total ddeclare it before calling, remember the variables, declare the output basis
            }
		//if we put the total declaration outside the for loop, the code won't work
        printf("\nTotal Amount Due: %d", total);
        printf("\n--------------------\n");

        printf("Enter Cash: ");
        scanf("%d", &cash);
        
		while(cash < total){		//the while inside the for loop will serve the repition in small round like in case insufficient money
			totalx= total- cash;		//we declare here the another jar for conntaining the insufficient balance 
            printf("Insufficient Cash. Remaining:%d Try again:",totalx);//then here we call it out, never forget to put it on the variables section
            scanf("%d", &cash); 
        }*/
void deposit(float *balance, float *salary) {
    float amount;

    printf("\nEnter your salary bruhh: ");
    scanf("%f", salary);
    printf("\nEnter amount you want to deposit: ");
    scanf("%f", &amount);

        *balance += amount;
        printf("\nAmount Granted!");

        printf("\nDEPOSITED: %.2f", amount);
        
    while (amount < *salary / 2) {
        printf("\nThe amount entered was so large! It should be a half of your salary (%.2f). Please try again.", *salary / 2);
    } 
    while (amount > *salary / 2) {
    printf("\nThe amount entered was too small! It should be a half of your salary more!(%.2f). Please try again.", *salary / 2);
    break;
    }


    
}

void withdraw(float *balance) {
    float amount;
    printf("\nenter amount you want to withdraw: ");
    scanf("%f", &amount);

    if (amount > *balance) {
        printf("\ninsufficient balance, are you poor?");
    } else {
        *balance -= amount;
        printf("\nwithdrawn: %.2f", amount);
    }
}

void checkbalance(float *balance) {
    printf("\ncurrent balance: %.2f", *balance);
}

int main() {
    float balance = 0.00, salary;
    int choice;
    char response;

    if (!mypin()) {
        return 0;
    }

    do {
        displaymenu();
        printf("\n\nenter the number of choice you want to execute: ");
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
            printf("\ntrying to take exit.....please click enter.");
            break;
        default:
            printf("your choice was not found, maybe in the other universe! so please try again!");
        }
        printf("\n--------------------\n");
        printf("Do you want to continue? (yes/no): "); 	//inside the do loop we indicate or ask the user if he wants to create another transaction or not
        scanf("%s", &response);
        
        system("cls"); 

    
} 
	while (strcmp (response,"yes") == 0||strcmp (response,"yes") == 0||strcmp (response,"Yes") == 0); 

    return 0;
}
