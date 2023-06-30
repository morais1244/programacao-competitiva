#include <stdio.h>
 
int main() {
 
    int i=0;
    float a, media;
    
    while(i < 2){
        scanf("%f",&a);
        if(a>=0 && a<=10){
            i++;
            media += a;
        }else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", media/2);
}