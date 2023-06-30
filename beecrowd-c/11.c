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
    float i , j , k,y;
    scanf("%f", &j);
    k = j;
    int sinal = -1;
    for(i=3,y=1; y<=j;i+=2,y++){
        k += sinal*pow(j,i)/fat(i);
        sinal = -sinal;
    }
}