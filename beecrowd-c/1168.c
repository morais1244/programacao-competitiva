#include <stdio.h>
#include <string.h>
 
int main() {
    int x,i,soma =0 ;
    char painel[1001];
    scanf("%d",&x);
    while(x != 0){
        scanf("%s",painel);
        for(i = 0; i<strlen(painel);i++){
            switch(painel[i]){
                case '1':
                soma += 2;
                break;
                case '2':
                soma += 5;
                break;  
                case '3':
                soma += 5;
                break;
                case '4':
                soma += 4;
                break;
                case '5':
                soma += 5;
                break;
                case '6':
                soma += 6;
                break;
                case '7':
                soma += 3;
                break;
                case '8':
                soma += 7;
                break;
                case '9':
                soma += 6;
                break;
                case '0':
                soma += 6;
                break;
            }
        }
        printf("%d leds\n",soma);
        x--;
        soma = 0;
    }
    return 0;
}