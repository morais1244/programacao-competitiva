#include <bits/stdc++.h>

#define MAX_PESSOAS 10
#define MAX_CHAR_NOME 13

using namespace std;

int main(){
    int N = 0;
    float L = 0.0, Q= 0.0;
    char lista[MAX_PESSOAS][MAX_CHAR_NOME];
    int indice_pessoa = 0;
    scanf("%d %f %f", &N,&L,&Q);

    for(int i = 0; i< N ; i++){
        scanf("%s", lista[i]);
    }
    while((L - Q) > 0){
        L  -= Q;
        indice_pessoa++;
    }
    indice_pessoa %= N;
    printf("%s %.1f\n", lista[indice_pessoa], L);
    return 0;
}