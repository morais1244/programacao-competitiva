#include <stdio.h>
 
int main() {
    int n,i,x=0;

    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }else{
            for(i=1;i<=n;i++){
                x++;
                if(x==n){
                    printf("%d\n",i);
                    x=0;
                }else{
                    printf("%d ",i);
                }
            }
        }
    }
    
    return 0;
}