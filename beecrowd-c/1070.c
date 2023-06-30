#include <stdio.h>
 
int main() {
 
    int i,d;
    scanf("%d",&d);
    if (d%2==1 || d%2==-1){
        for (i=d ;i<=d+10; i+=2){
            printf("%d\n",i);
        }
    }
    else {
        for (i=d+1 ;i<=d+11; i+=2){
            printf("%d\n",i);
        }
    }
    return 0;
}