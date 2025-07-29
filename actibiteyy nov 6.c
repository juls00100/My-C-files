#include <stdio.h>
//this will my acivity for november 6.

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
    printf("\n\n 1. deposit\t 2. withdraw\t 3. check balance\t 4. exit");
}

void deposit(float *balance, float *salary) {
    float amount;

    printf("\nEnter your salary bruhh: ");
    scanf("%f", salary);
    printf("\nEnter amount you want to deposit: ");
    scanf("%f", &amount);

    if (amount > *salary / 2) {
        printf("\nThe amount entered was so large! It should be a half of your salary or less (%.2f)...", *salary / 2);
    } 
 /*   else if (amount < *salary / 2) {
    printf("\nThe amount entered was too small! It should be a half of your salary more!(%.2f).", *salary / 2);
    
    }*/
    else 
    {
        *balance += amount;
        printf("\nAmoun Granted!");

        printf("\nDeposited: %.2f", amount);
    }
    
}

void withdraw(float *balance) {
    float amount;
    printf("\nEnter amount you want to withdraw: ");
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
            printf("\nTrying to take exit.....please click enter.");
            break;
        default:
            printf("Your choice was not found, maybe in the other universe! so please try again!");
        }

    } while (choice != 4);

    return 0;
}
