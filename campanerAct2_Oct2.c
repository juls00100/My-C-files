//Campaner, Julios S. BSIT-1A

#include<stdio.h>
#include<string.h>
int main(){
    int x, pnum, price, total = 0, cash, change=0, rem;
    char response;

    do{
        printf("Enter number of products: ");
        scanf("%d", &pnum);

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
            printf("Insufficient Cash. Try again:");
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
        
        printf("\n");
        printf("\nDISCOUNTS:");
        printf("\n");
        
    	if (total>500&& total<=1000){
    		printf("With 5% discount just ask fot it to the cashier ahaha");
		}else if (total>1000){
    		printf("With 10% discount just ask fot it to the cashier sheesh");
    	}else{
        	printf("\nNo discount Avail:<");
		}
        printf("\n--------------------\n");
        printf("Do you want to continue? (yes/no): ");
        scanf("%s", &response);
        system("cls");
    } 
	while (strcmp ("no","NO") == 1);
    	printf("Thank you for using My App, See you Tommorow!");
			
return 0;
}

