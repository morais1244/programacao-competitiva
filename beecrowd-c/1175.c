#include <stdio.h>
 
int main() {
 
    int X[20];
    int i,x,temp;
    
    for (i=0 ; i<20; i++){
        scanf("%d",&X[i]);
    }
    for (i=0,x=19; i<10; i++,x--){
        temp = X[i];
        X[i] = X[x];
        X[x] = temp;
    }
    for (i=0 ; i<20; i++){
        printf("N[%d] = %d\n",i,X[i]);
    }
    
    return 0;
}