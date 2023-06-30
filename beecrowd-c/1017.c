#include <stdio.h>
 
int main() {
 
    int t, speed;
    double fuel, km;
    scanf("%d %d",&t, &speed);
    km = speed*t;
    fuel = km/12;
    printf("%.3lf",fuel);
    return 0;
}