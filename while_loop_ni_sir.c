#include<stdio.h>

int main(){
	 int x, num;
	 float average, grade, sum = 0;

		printf("Enter no. of Students: ");
		scanf("%d", &num);

		printf("\n");

			while(num > 50){
				printf("Maximum Limit is 50. Try Again: ");
				scanf("%d", &num);
			}

		printf("\n");

			for(x = 1; x <= num; x++){
				printf(" Enter marks of student %d: ", x);
				scanf("%f", &grade);
					sum = sum + grade;
			}
		average = sum / num;
		printf("\nClass Average: %.2f", average);
}
