//Campaner, Julios S. BSIT-1A

/* sir upon checking my own code po, i saw minimal mistakes po and i want to correct it that's why I'm submitting this again
unfair din kasi sir, others may have long time finding their own sources tas as one of the on time passers sempre unfair jud 
thank you for your considerations sir =3=*/

#include<stdio.h>
#include<string.h>		//we use string for the strcmp int or char
int main(){
    int x, ns, cash, change = 0, totalx,pnum; //indicate zeros on your variables to reverse back in the loops
    float price, total = 0;
    char response[10];		//never forget the numbers assigned after the char
	
    do{			// we undergo do while for keeps on asking the enough money until it will give true to execute the end
        printf("Enter number of products: \t");
        scanf("%d", &ns);
		
		total= 0; //always declare for the reptition  of the loop incase you'll do another loop
            for(x = 1; x <= ns; x++){ //here is the for loop, never forgetti mag agagad ang repitiittion sa for loop
                printf("Enter price for product %-5d: ", x);
                scanf("%f", &price);
                
                total = total + price; //in order to get the total ddeclare it before calling, remember the variables, declare the output basis
            }
		//if we put the total declaration outside the for loop, the code won't work
        printf("\nTotal Amount Due: %-5.2f", total);
        printf("\n--------------------\n");

        printf("Enter Cash: ");
        scanf("%d", &cash);
        
		while(cash < total){		//the while inside the for loop will serve the repition in small round like in case insufficient money
			totalx= total- cash;		//we declare here the another jar for conntaining the insufficient balance 
            printf("Insufficient Cash. Remaining:%-5d Try again:",totalx);//then here we call it out, never forget to put it on the variables section
            scanf("%d", &cash); 
  
        }
		
        change = cash - total; //they also needs a change so we declare it here
		pnum++;
	//List of Outpyuts here:

        printf("\n--------------------");
        printf("\n------RECEIPT-------");
        printf("\n--------------------");
        printf("\nNumber of Products: %-5d", ns);
        printf("\nTOTAL DUE: %-5.2f", total);
        printf("\nCash Received: %-5d", cash);
        printf("\nChange: %-5d", change);

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
		printf("Thank you for using My App, See you soon!");
    	

	return 0;
}

