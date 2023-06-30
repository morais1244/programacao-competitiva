#include <stdio.h>

int main(){
    float i,j,k=0;
    i = 1.50;
    j = 1.10;
    while(i>j){
        i+=0.02;
        j+=0.03;
        k++;
    }
    printf("%f\n",k);
}