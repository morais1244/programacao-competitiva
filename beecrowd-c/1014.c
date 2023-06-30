#include <stdio.h>
 
int main() {
 
    int x;
    float fuel;
    double consum;
    scanf("%d %f",&x,&fuel);
    consum = x/fuel;
    printf("%.3lf km/l\n",consum);
    
 
    return 0;
}