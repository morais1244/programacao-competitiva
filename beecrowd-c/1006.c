#include <stdio.h>
 
int main() {
    double a, b, c, sum;
    scanf("%lf",&a);
    scanf("%lf %lf",&b, &c);
    sum = ((a*2) + (b*3) + (c*5))/10;
    printf("MEDIA = %.1lf\n",sum);
    return 0;
}