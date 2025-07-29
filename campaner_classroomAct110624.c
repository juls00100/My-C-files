//Julios S. Campaner BSIT 1A
#include <stdio.h>

 void theDetail(int e);
 void sendCalc(float rpH, float nHw, float dd);
 void sendSummary(int e, float totwork, float ingpay, float totdd,float innpay, float totrpH);


int main(){
	
	int e;
	
	printf("ENTER NO. OF EMPLOYEES:");
	scanf("%d",&e);
	
	theDetail(e);
	
}
 void theDetail(int e){
 	
 	float rpH, nHw, dd;
	float totwork = 0;
	float totdd = 0, totnet  = 0, totg = 0, ingpay, innpay, ttrate = 0;
	int c;
	char neym[69];
	
	for (c= 1; c<= e; c++){
		
		printf("\nDETAILS OF THE EMPLOYEE %d:", c);
		printf("\nNAME:");
		scanf("%s",&neym);
		printf("RATE PER HOUR:");
		scanf("%f",&rpH);
		printf("NO. OF HOURS WORKED:");
		scanf("%f",&nHw);
		printf("DEDUCTIONS:");
		scanf("%f",&dd);
		
		totwork += nHw;
		
		totg = rpH*nHw;
		ingpay+=totg;
		
		totnet = totg - dd;
		innpay+=totnet;
		
		ttrate+= rpH;
		totdd += dd;
		
		sendCalc(rpH,nHw,dd);	
	}
	sendSummary(e,totwork,ingpay,totdd,innpay,ttrate);
	
 }
 void sendCalc(float rpH, float nHw, float dd){
 	float gpay, npay;
 	
 	gpay = rpH * nHw;
 	npay = gpay - dd;
 	
 	printf("--------------------");
 	printf("\nGROSS PAY: %.2f", gpay);
 	printf("\nNET PAY: %.2f", npay);	
 	
 	printf("\n--------------------");
 }
 
 void sendSummary(int e, float totwork, float ingpay, float totdd,float innpay, float totrpH){
 	
 	printf("\n--------SUMMARY---------");
 	printf("\n--------------------");
 	
 	printf("\nNO. OF EMPLOYEES: %d", e);
 	printf("\nTOTAL HOURS WORKED: %.2f", totwork);	
 	printf("\nTOTAL GROSS PAY: %.2f", ingpay);
	printf("\nTOTAL DEDUCTIONS: %.2f", totdd);	
	printf("\nTOTAL NET PAY: %.2f", innpay);		
 
 	float aveRatehour,aveGpay,aveNpay;
 	
 	aveRatehour = totrpH/ e;
 	aveGpay= ingpay/e;
 	aveNpay= innpay/e;
 	
 	printf("\n----------------------------");
 		printf("\nAVERAGE RATE PER HOUR: %.2f", aveRatehour);
 		printf("\nAVERAGE GROSS PAY: %.2f", aveGpay);
		printf("\nAVERAGE NET PAY: %.2f", aveNpay); 
				
 }
 
 
 
 
 
 
 

