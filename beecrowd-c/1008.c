#include <stdio.h>
 
int main() {
    int number, hour;
    float salary_per_hour, total_salary;
    scanf("%d %d %f",&number,&hour,&salary_per_hour);
    total_salary = hour*salary_per_hour;
    printf("NUMBER = %d\n",number);
    printf("Salary = U$ %.2f\n",total_salary);
 
    return 0;
}