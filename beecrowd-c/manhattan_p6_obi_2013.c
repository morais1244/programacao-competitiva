#include <stdio.h>

int main(){
    int x1,x2,x3,x4, total_x, total_y;
    scanf("%d %d %d %d", &x1,&x2,&x3,&x4);
    if (x1>x3) total_x = x1-x3;
    else if(x3>x1) total_x = x3-x1;
    else total_x = 0;
    if(x2>x4) total_y = x2 - x4;
    else if (x4>x2) total_y = x4-x2;
    else total_y = 0;
    printf("\n%d",total_y+total_x);
    return 0;
}