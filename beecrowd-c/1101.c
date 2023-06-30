#include <stdio.h>
 
int main() {
 
    int m, n, soma= 0,c;
    
    while(1){
        scanf("%d %d", &m, &n);
        if(m<=0 || n<=0) break;
        else{
            soma = 0;
            if(n>m){
                for(c=m;n>=c;c++){
                    printf("%d ",c);
                    soma += c;
                }
                printf("Sum=%d\n",soma);
            }else if(m>n){
                for(c=n;m>=c;c++){
                    printf("%d ",c);
                    soma +=c;
                }
                printf("Sum=%d\n",soma);
            }
        }
    }
    return 0;
}