#include <stdio.h>
int main() {
    int divisor, dividendo, quociente,resto , i, aux;

    i =1;
    scanf("%d %d", &dividendo, &divisor);

    while(1){
        aux = i*divisor;
        if(aux == dividendo){
            quociente=i;
            resto =0;
            break;
        }
        if (aux > dividendo){
            i--;
            quociente = i;
            resto = dividendo - i*divisor;
            break;
        }
        i++;
    }
    printf("\n%d  = %d * %d + %d\n", dividendo, divisor, quociente, resto);
}