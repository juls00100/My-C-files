#include  <stdio.h>
int main()
{
	
	//char fname[60],mname[60], lname[60];
	int tothrs,rph,deduc;
	double grossp,netpay;
	//int Total_Money_spent;
	
	printf("Enter Total Hours Worked:");
	scanf("%d",&tothrs);
	printf("Enter Rate per Hour:");
	scanf("%d",&rph);
	printf("Enter Deductions:");
	scanf("%d",&deduc);
	printf("\nOutput:");
	printf("\n-------------------");
	printf("\nSALARY DETAILS");
	printf("\n-------------------");
	
	
	printf("\nTotal Hours Worked:%d",tothrs);
	
	printf("\nRate per Hour:%d",rph);
	grossp=tothrs*rph;
	printf("\nGross Pay:%.2lf",grossp);
	printf("\nDeductions:%d",deduc);
	netpay=grossp-deduc;
	printf("\nNet Pay:%.2lf",netpay);
	
	
}
