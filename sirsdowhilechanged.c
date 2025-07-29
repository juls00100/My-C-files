#include<stdio.h>
#include<string.h>
int main(){
    int x, pnum, price, total = 0, cash, change, rem;
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
// 		printf("\n\n");
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

        printf("\n--------------------\n");
        printf("Do you want to continue? (yes/no): ");
        scanf("%s", &response);
     //   system("cls");
    } 
	while (strcmp(response,"no") ==0||strcmp(response,"NO") ==0);
    	printf("\nThank you for using the App, See you soon!");

}

