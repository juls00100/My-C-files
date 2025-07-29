	//Program: do while loop
	//Written by: Julios S. Campaner
	//Date Written: 10-02-24
	//Purpose: enhancing po
	#include<stdio.h>
	#include<string.h>
	
	int main()
	{
	int choice,x,y;
		while(1) {
			printf("Enter the command number:\n0) Exit\n1) AND\n2) OR\n");
			scanf("%d",&choice);
			if(choice==0){
				break;
			}
		do{
			printf("Enter True (1) or False (0)\n");
			printf("x= ");
			scanf("%d",&x);
			printf("y= ");
			scanf("%d",&y);
		}
		while (x!= 0|| x!= 1 || y!= 0 ||y!= 1);

		if(choice == 1){
			printf("%d AND %d is %d\n",x,y,x&&y);
			
		}
		if(choice == 2){
			printf("%d AND %d is %d\n",x,y,x||y);
			
		}
		
	}
				return 0;
}
		
		
		
		
		
		
		
		
	
