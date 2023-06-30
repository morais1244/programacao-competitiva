#include <stdio.h>
#include <math.h>

int fat(k){
    int fat;
    for(fat = 1;k>1;k--){
        fat = fat* k;
    }
    return fat;
}

int main(){
    int x, i;
    float soma = 1;
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        soma += (float)pow(x,i)/fat(i);
    }
    printf("%f",soma);
    return 0;
}