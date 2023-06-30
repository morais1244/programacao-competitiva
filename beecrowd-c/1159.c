#include <stdio.h>
 
int main() {
    int n,i,cont;
    while(1){
        scanf("%d",&n);
        if (n==0)
            break;
        if ((n%2==1) || (n%2==-1))
            n++;
        for(i=0, cont=0;i<5;i++,n+=2){
            cont+=n;
        }
        printf("%d\n",cont);
    }
    return 0;
}