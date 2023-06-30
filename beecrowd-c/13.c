#include <stdio.h>

int main(){
    int  x = -1000, y = 10000;
    int  k;
    float porc,cont_p, media, media_i, cont_i = 0,soma=0, soma_i = 0, cont = 0;

    while(1){
        scanf("%d",&k);
        if(k==100000){
            break;
        }else{
            soma+=k;
            if(k>x)
                x = k;
            if(k<y)
                y = k;
            if(k%2==1){
                soma_i +=k;
                cont_i++;
            }
            if(k%2==0)
                cont_p++;
            cont++;
        }
    }
    media = soma/cont;
    media_i = soma_i/cont_i;
    porc = (cont_p/cont)*100;
    printf("%f",soma);
    printf("%f",cont);
    printf("%f",media);
    printf("%f",x);
    printf("%f",y);
    printf("%f",media_i);
    printf("%f",porc);
}