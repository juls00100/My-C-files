
#include <stdio.h>

typedef struct {
    char name[50];
    float rate_per_hour;
    float hours_worked;
    float deductions;
    float gross_pay;
    float net_pay;
} Employee;

void calculate_pay(Employee *e) {
    // Calculate gross pay and net pay
    e->gross_pay = e->rate_per_hour * e->hours_worked;
    e->net_pay = e->gross_pay - e->deductions;
}

int main() {
    int num_employees;
    
    // Get the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &num_employees);
    
    Employee employees[num_employees];
    float total_hours_worked = 0;
    float total_gross_pay = 0;
    float total_deductions = 0;
    float total_net_pay = 0;
    float total_rate_per_hour = 0;
    
    // Input employee details
    for (int i = 0; i < num_employees; i++) {
        printf("Details of employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", employees[i].name);
        
        printf("Rate per hour: ");
        scanf("%f", &employees[i].rate_per_hour);
        
        printf("Hours worked: ");
        scanf("%f", &employees[i].hours_worked);
        
        printf("Deductions: ");
        scanf("%f", &employees[i].deductions);
        
        // Calculate pay for each employee
        calculate_pay(&employees[i]);
        
        // Update summary totals
        total_hours_worked += employees[i].hours_worked;
        total_gross_pay += employees[i].gross_pay;
        total_deductions += employees[i].deductions;
        total_net_pay += employees[i].net_pay;
        total_rate_per_hour += employees[i].rate_per_hour;
    }
    
    // Calculate averages
    float average_rate_per_hour = total_rate_per_hour / num_employees;
    float average_gross_pay = total_gross_pay / num_employees;
    floataverage_net_pay = total_net_pay / num_employees;
    
    // Output employee details
    for (int i = 0; i < num_employees; i++) {
        printf("\nDetails of employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Rate per hour: %.2f\n", employees[i].rate_per_hour);
        printf("Hours worked: %.2f\n", employees[i].hours_worked);
        printf("Deductions: %.2f\n", employees[i].deductions);
        printf("Gross pay: %.2f\n", employees[i].gross_pay);
        printf("Net pay: %.2f\n", employees[i].net_pay);
    }
    
    // Output the summary
    printf("\nSummary:\n");
    printf("Number of employees: %d\n", num_employees);
    printf("Total hours worked: %.2f\n", total_hours_worked);
    printf("Total gross pay: %.2f\n", total_gross_pay);
    printf("Total deductions: %.2f\n", total_deductions);
    printf("Total net pay: %.2f\n", total_net_pay);
    printf("Average rate per hour: %.2f\n", average_rate_per_hour);
    printf("Average gross pay: %.2f\n", average_gross_pay);
    printf("Average net pay: %.2f\n", average_net_pay);
    
    return 0;
}
