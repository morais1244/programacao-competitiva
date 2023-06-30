#include <stdio.h>

int main(){
    int n_hab=0, masc, fem, azuis,verdes,o_cast,c_cast,loiro,preto,idade,i,aux=-1;
    float fem_esp;
    printf("número de habitantes: ");
    scanf("%d\n",&i);
    while(n_hab<i){
        char l;
        printf("sexo: ");
        scanf("%c\n",&l);
        switch(l){
            case 'masculino':
            masc++;
            case 'feminino':
            fem++;
        }
        char cabelo;
        char olho;
        printf("cabelo: ");
        scanf("%c\n",&cabelo);
        switch(l){
            case 'loiro':
            loiro++;
            case 'castanho':
            c_cast++;
            case 'preto':
            preto++;
        }
        printf("olho: ");
        scanf("%c\n",&olho);
        switch(l){
            case 'azul':
            azuis++;
            case 'castanho':
            o_cast++;
            case 'verde':
            verdes++;
        }
        printf("idade: ");
        scanf("%d\n",&idade);
        if(aux<idade)
            aux = idade;
        if(idade>18 && idade<35 && l=='feminino' && olho =='verde' && cabelo == 'loiro')
            fem_esp++;
        n_hab++;
    }
    printf("maior idade: %d\n", aux);
    (float)n_hab;
    printf("porc: %d",fem_esp*100/n_hab);

    return 0;

}