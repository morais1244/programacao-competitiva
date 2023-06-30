#include <stdio.h>
 
int main() {
 
    int X[11],i;
    
    for (i=0 ; i<=10; i++){
        scanf("%d\n",&X[i]);
    }
    for (i=0 ; i<=10; i++){
        printf("X[%d] = %d\n",i,X[i]);
    }
    return 0;
}