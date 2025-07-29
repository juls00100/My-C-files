#include <stdio.h>



	int main()
	{
	char neym[69], response[70]/*, mname[60],lname[60]*/;
	int x, e,rpH,nHw,dd,computer;
	float gross=0,net=0;
	float sum,caverage;
	
	do{
		printf("\nEnter the number of your Employees:");
		scanf("%d",&e);
	
		for(x = 1; x <= e; x++){
		
		printf("\nDetails of Empolyee: %d", x);
		
		printf("\nName:");
		scanf("%s",&neym);

		printf("\nRate per Hour:");
		scanf("%d",&rpH);
		
		printf("\nNo. of Hours worked:");
		scanf("%d",&nHw);
		
		printf("\nDeductions:");
		scanf("%d",&dd);
		
		gross=0; net=0;
    	gross= rpH*nHw;
    	net= gross - dd;
		
		printf("\n------------------------------");
		printf("\nGross Pay: %.2f", gross);
		printf("\nNet Pay:%.2f", net);
		printf("\n------------------------------");
	//	sum = sum + average;
		}
		printf("\nSUMMARY");
		caverage = sum / e;
	
		printf("\nClass average:%.2f",caverage);
	}	while (strcmp (response,"yes") == 0||strcmp (response,"yes") == 0||strcmp (response,"Yes") == 0);
	printf("Thank you for using my app, See you soon!");
	}
	
	
double payCalc(int s1, int s2, int s3) {
    double average = (s1 + s2 + s3) / 3.0;
    return average;
	return sum;
	}



	double getAve(int total){
	double ave= total/3;
	return ave;
}



