	#include <stdio.h>
	int main(){ 
	char pass [30]; 
	printf("Enter your password:"); 
	scanf("%s", &pass); 
	if(strcmp(pass, "juls093")==0) { 
	printf("Access Granted.");
	
	}else{ printf("Access Denied.");
	}
	}
