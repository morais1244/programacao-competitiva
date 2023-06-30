#include <stdio.h>
 
int main() {
    double a, b, sum;
    scanf("%lf",&a);
    scanf("%lf",&b);
    sum = ((a*3.5) + (b*7.5))/11;
    printf("MEDIA = %.5lf\n",sum);
    return 0;
}