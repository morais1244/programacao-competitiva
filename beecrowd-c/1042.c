#include <stdio.h>
 
int main() {
    int a,b,c, maior, medio, menor;
    scanf("%d %d %d", &a,&b,&c);
    

    if (a>b && a>c){
        maior = a;
        if (b>c){
            medio = b;
            menor = c;
        }
        else{
            medio = c;
            menor = b;
        }
    }
    else if (b>a && b>c){
        maior = b;
        if (a>c){
            medio = a;
            menor = c;
        }
        else{
            medio = c;
            menor = a;
        }
    }
    else{
        maior = c; 
        if (b>a){
            medio = b;
            menor = a;
        }
        else{
            medio = a;
            menor = b;
        }
    }
    printf("%d\n%d\n%d\n\n",menor, medio, maior);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}