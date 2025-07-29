#include <stdio.h>
#include<string.h>		//we use string for the strcmp int or char

void myInfo();
void statuS();
void userBuyOrNot();
void buyingAproduct();

char name[50], bdey[59];

int main(){
	char name[50], lname[50];;
	printf("Enter your name:");
	scanf("%s", &name);
	printf("Enter your last name:");
	scanf("%s", lname);
	printf("Your full name is %s%s.", name, lname);
	
	myInfo();

}

void myInfo(){
	char bdey[90];
	printf("\nMonth of your Birth Day?");
	scanf("%f", &bdey);
	
	statuS();
}

void statuS(){
	char stat[70];
	
	printf("\nAre you Single or Taken?");
	scanf("%s", &stat);
	
	userBuyOrNot();
}


void userBuyOrNot(){
	
	int heyUser;
	printf("\nHey %s do you want to buy some coffee?", name);
	scanf("%s",&heyUser);
	
	 puts("Choices:");
	 puts("A - Yes");
	 puts("B - No");
	 puts("C - I don't know.");
	 printf("Your choice: ");
	 scanf("%s",&heyUser);
	printf("You've opted for ");
	 switch(heyUser)
	 {
	 case 'A':
	 printf("Yes,  ");
	 case 'B':
	 printf("No  ");
	 case 'C':
	 printf("Huhh???" );
	 default:
	 printf(" for coffee.");
	 }
	buyingAproduct();

}
void buyingAproduct(){

    int x, pnum, price, total = 0, cash, change = 0, totalx; //indicate zeros on your variables to reverse back in the loops
    char response[10];		//never forget the numbers assigned after the char
	
    do{			// we undergo do while for keeps on asking the enough money until it will give true to execute the end
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
  
        }
		
        change = cash - total; //they also needs a change so we declare it here

	//List of Outpyuts here:

        printf("\n--------------------");
        printf("\n------RECEIPT-------");
        printf("\n--------------------");
        printf("\nNumber of Products: %d", pnum);
        printf("\nTOTAL DUE: %d", total);
        printf("\nCash Received: %d", cash);
        printf("\nNumber of Products: %d", pnum);
        printf("\nChange: %d", change);

        printf("\n--------------------\n");
        printf("Do you want to continue? (yes/no): "); 	//inside the do loop we indicate or ask the user if he wants to create another transaction or not
        scanf("%s", &response);
        
        system("cls"); //we have cls here to clear the previouus transacttioon and create another after the yes or no pportionn
        
    } 
	while (strcmp (response,"yes") == 0||strcmp (response,"yes") == 0||strcmp (response,"Yes") == 0); 
	// when we use int, 1 is the true value, in char 0 is the true value
	
	/*    
	}while(response == 1);
    printf("\nThank you for using the App, See you soon!");
    */	
		printf("Thank you for using My App, See you Tommorow!");
    	


}


