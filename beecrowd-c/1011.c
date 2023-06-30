#include <stdio.h>
 
int main() {
    double R, space;
    scanf("%lf",&R);
    space = (4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n", space);
    
    return 0;
}   