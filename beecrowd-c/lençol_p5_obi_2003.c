#include <stdio.h>

int main(){
    int a_1,b_1,a_2,b_2,a,b;
    scanf("%d %d %d %d %d %d", &a_1,&b_1,&a_2,&b_2,&a,&b);
    if (a_1*b_1 + a_2*b_2 > a*b) printf("S");
    else printf("N");
}