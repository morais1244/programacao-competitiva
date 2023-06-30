#include <stdio.h>
 
int main() {
 
    int x,z,i,aux=0,aux2=0;
    scanf("%d %d",&x, &z);
    while(z<=x) scanf("%d",&z);
    for(i=x;aux<z;i++){
        aux+=i;
        aux2++;
    }
    printf("%d\n",aux2);
    return 0;
}