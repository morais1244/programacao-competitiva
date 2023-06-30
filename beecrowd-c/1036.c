#include <stdio.h>
#include <math.h>

 
int main() {
    double a,b,c,t;
    scanf("%lf %lf %lf", &a, &b,&c);
    if ((a ==0) || ((b*b-4*a*c)<0)){
        printf("Impossivel calcular\n");
        return 0;
    }
    t = sqrt((b * b) - 4 * a * c);
    printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
    return 0;
}