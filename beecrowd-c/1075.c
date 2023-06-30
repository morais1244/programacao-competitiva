#include <stdio.h>
 
int main() {
 
    int i,x;
    scanf("%d",&x);
    for (i=2 ;i<10000; i+=x){
        printf("%d\n",i);
    }
 
    return 0;
}