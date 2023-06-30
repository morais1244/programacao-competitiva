#include <stdio.h>
 
int main() {
 
    int i = 1;

    double k=2,s=1,l=3;
    while(i<=18){
        s+=l/k;
        l+=2;
        k*=2;
        i++;
    }
    printf("%.2lf\n",s);
    
 
    return 0;
}