#include <stdio.h>
 
int main() {
    int n[10],i,x;
    scanf("%d",&x);
    for (i=0;i<10;i++,x*=2){
        printf("N[%d] = %d\n",i,x);
    }
    
 
    return 0;
}