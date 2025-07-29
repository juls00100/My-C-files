	#include <stdio.h>
	//This will be a program for my final huhuhu.
	
	int myPin(){
		const int corrPin = 1234;
		int enteredPin;
		
		printf("Enter your pin mastuhrr:");
		scanf("%d", &enteredPin);
		
		if (enteredPin == corrPin){
			return 1;
		}
		else
		{
			printf("\nIncorrect PIN. The machine cannot grant your access!");
			return 0;
		}
	}
	void displayMenu(){
		printf("\n\nHere goes the menu:");
		printf("\n\n1. Deposit\t2. Withdraw\t3. Check balance\t4. Exit");
	}
	void deposit(float *balance, float salary){
		float amount;
		
		printf("\nEnter your salary bruhh:");
		scanf("%f",&salary);
		printf("\nEnter amount you want to deposit:");
		scanf("%f",&amount);
		
		if (amount > salary/2){
			printf("\nThe amount entered was so large! It should be a half of your salary (%.2f).",salary/2);
		}
		else
		{
		*balance +=amount;
		printf("\nDeposited: %.2f",amount);
		}
	}
	void withdraw (float *balance){
		float amount;
		printf("\nEnter amount you want to Withraw:");
		scanf("%f", &amount);
		
		if(amount>*balance){
			printf("\nInsufficient balance, are you poor?");
		}
		else
		{
			*balance -= amount;
			printf("\nWithrawn: %.2f", amount);
		}
	}
	void checkBalance(float *balance)
	{
		printf("\nCurrent balance: %.2f",*balance);
	}
	
	int main()
	{
	float balance = 0.00, salary;
	int choice;
	
	if (!corrPin()){
		return 0;
	}
	
	do{
		displayMenu();
		printf("\n\nEnter the number of choice you want execute:");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				deposit(&balance, salary);
				break;
			case 2:
				withdraw(&balance);
				break;
			case 3:
				checkBalance(&balance);
				break;
			case 4:
				printf("\nTrying to take Exit.....Please click Enter.");
				break;
			default:
				printf("Your choice was not found, maybe in the other Universe! So please try again!");
		}
		
	}while (choice !=4);
	
	return 0;
		
	}
