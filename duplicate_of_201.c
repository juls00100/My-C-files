//Campaner, Julios S. BSIT-1A

/* sir upon checking my own code po, i saw minimal mistakes po and i want to correct it that's why I'm submitting this again
unfair din kasi sir, others may have long time finding their own sources tas as one of the on time passers sempre unfair jud 
thank you for your considerations sir =3=*/

#include<stdio.h>
#include<string.h>
int main(){
    int x, pnum, price, total = 0, cash, change = 0, totalx;
    char response[10];
	
    do{
        printf("Enter number of products: ");
        scanf("%d", &pnum);
		
		total= 0; //sir i got it! di na sya ma add sa next output try gali sir ahahha
            for(x = 1; x <= pnum; x++){
                printf("Enter price for product %d: ", x);
                scanf("%d", &price);
                total = total + price;
            }
		
        printf("\nTotal Amount Due: %d", total);
        printf("\n--------------------\n");

        printf("Enter Cash: ");
        scanf("%d", &cash);
        
		while(cash < total){
			totalx= total- cash;
            printf("Insufficient Cash. Remaining:%d Try again:",totalx);
            scanf("%d", &cash);
  
        }
		
        change = cash - total;

        printf("\n--------------------");
        printf("\n------RECEIPT-------");
        printf("\n--------------------");
        printf("\nNumber of Products: %d", pnum);
        printf("\nTOTAL DUE: %d", total);
        printf("\nCash Received: %d", cash);
        printf("\nNumber of Products: %d", pnum);
        printf("\nChange: %d", change);

        printf("\n--------------------\n");
        printf("Do you want to continue? (yes/no): ");
        scanf("%s", &response);
        
        system("cls");
        
    } 
	while (strcmp (response,"yes") == 0||strcmp (response,"yes") == 0||strcmp (response,"Yes") == 0); // when we use int, 1 is the true value, in char 0 is the true value

    	printf("Thank you for using My App, See you Tommorow!");
    	

	return 0;
}

