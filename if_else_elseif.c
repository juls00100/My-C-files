#include <stdio.h>
int main(){
	char light[50];
	
	printf("Enter your light:");
	scanf("%s",&light);
	
	if (strcmp(light,"green")==0){
		printf("Go!");
	}else if(strcmp(light,"red")==0){
		printf("Stop!");
	}else if(strcmp(light,"amber")==0){
		printf("Walk with caution!");
	}else{
		printf("Light not Registered!");
	}
	
	return 0;
}
