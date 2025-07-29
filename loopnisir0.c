# include<stdio.h>

int main(){
    int x, pnum, price, total = 0, cash, change;
    int response;

    do{
        printf("Enter number of products: ");
        scanf("%d", &pnum);

            for(x = 1; x <= pnum; x++){
                printf("Enter price for product %d: ", x);
                scanf("%d", &price);
                total = total + price;
            }

        printf("\nTotal Due: %d", total);
        printf("\n--------------------\n");
        printf("Enter cash: ");
        scanf("%d", &cash);

        while(cash < total){
            printf("Insufficient Cash, Try Again: ");
            scanf("%d", &cash);
        }

        change = cash - total;

        printf("\n--------------------");
        printf("\nRECEIPT");
        printf("\n--------------------");
        printf("\nNumber of Products: %d", pnum);
        printf("\nTOTAL DUE: %d", total);
        printf("\nCash Received: %d", cash);
        printf("\nNumber of Products: %d", pnum);
        printf("\nChange: %d", change);

        printf("\n--------------------\n");
        printf("Do you want to continue? (1-yes/0-no): ");
        scanf("%d", &response);
        system("cls");
        
    }while(response == 1);
    printf("\nThank you for using the App, See you soon!");

}

