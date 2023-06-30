#include <stdio.h>

int main(){
    int quad, n,i=1,soma=1;
    printf("Digite o número a ser elevado ao quadrado: ");
    scanf("%d\n",&n);
    quad = n*n;
    printf("O quadrado de %d é %d = ",n,quad);
    while(soma<=quad){
        if(soma==quad){
            printf("%d\n",i);
            break;
        }else{
        printf("%d+",i);
        i +=2;
        soma += i;
        }
    }
    return 0;

}