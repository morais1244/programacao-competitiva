#include <stdio.h>
 
int main() {
    float x[12][12];
    char k;
    int i,j,linha,d=12;
    float soma = 0, media;
    scanf("%d %c",&linha,&k);
    for(i = 0; i<12; i++){
        for(j = 0;j<12; j++){
            scanf("%f",&x[i][j]);
        }
    }
    if(k == 'S'){
        for(d=0;d<12;d++)
            soma += x[linha][d];
        
        printf("%.1f\n",soma);
    }else{
        for(d=0;d<12;d++)
            soma += x[linha][d];
        media = soma/12;
        printf("%.1f\n",media);
    }
    return 0;
}