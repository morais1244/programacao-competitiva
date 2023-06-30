#include <stdio.h>
#include <math.h>

int main() {
    double l,b,c, area, a;
    while(1){
        scanf("%lf" ,&a);
        if(a == 0) break;
        scanf("%lf %lf",&b,&c);
        int lado ;
        area = a*b;
        l = area/(c*0.01);
        lado = sqrt(l);
        
        printf("%d\n",lado);
        
    }
    return 0;
}