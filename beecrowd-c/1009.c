#include <stdio.h>
 
int main() {
    char name;
    double salary, total_selling, total;
    scanf("%s %lf %lf",&name, &salary, &total_selling);
    total = salary + (total_selling*15/100);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}