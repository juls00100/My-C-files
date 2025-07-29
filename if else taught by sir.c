#include <stdio.h>
int main (){
	
	//try the if else of the Traffic Lights//
	char light[50];
	
	printf("Enter your light color:");
	scanf("%s",&light);
	
	if (strcmp(light,"red")==0){
		printf("Stop");
	}else if(strcmp (light,"green")==0){
		printf("Go");
	}else if(strcmp(light,"amber")==0){
		printf("Process with caution");
	}else{
		printf("Light not Available");
	}
	
	
	
	}
	
	
	

