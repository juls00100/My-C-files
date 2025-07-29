
#include <stdio.h>

void evaluategrade(double average);
double gradecalc(int s1, int s2, int s3);
void displayg(double ave, char name[40]);

void evaluategrade(double average) {
    if (average >= 75) {
        printf("\nPassed!");
    } else {
        printf("Failed!");
    }
}

double gradecalc(int s1, int s2, int s3) {
    double average = (s1 + s2 + s3) / 3.0;
    return average;
}

void displayg(double ave, char name[40]) {
    printf("Hello %s, your grade is %.2lf\n", name, ave);
    evaluategrade(ave);
}

int main() {
    char name[40];
    int x,snum, s1, s2, s3;
    
    do{
		printf("\nEnter the number of students you want to compute:");
		scanf("%d",&snum);
		
    printf("Enter name: ");
    scanf("%s", name);
    
    for(x = 1; x <= snum; x++){
    printf("Enter %d grade: ", x);
    scanf("%d", &s1);
    
/*    printf("Enter second grade: ");
    scanf("%d", &s2);
    
    printf("Enter third grade: ");
    scanf("%d", &s3);
*/    
    double average = gradecalc(s1, s2, s3);
    displayg(average, name);
    
    return 0;
	}
}while	
}
