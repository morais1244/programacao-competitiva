#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char texto[51];
    while(scanf("%[^\n]%*c",texto) != EOF){
        int fecharI = 0;
        int fecharA = 0;
        for(int i = 0; i < strlen(texto); i++){
            if(texto[i] == '_'){
                if(fecharI){
                    printf("%s","</i>");
                }
                else{
                    printf("%s","<i>");
                }
                fecharI = !fecharI;
            }
            else if(texto[i] == '*'){
                if(fecharA){
                    printf("%s","</b>");
                }
                else{
                    printf("%s","<b>");
                }
                fecharA = !fecharA;
            }
            else{
                printf("%c",texto[i]);
            }
        }
        printf("\n");
    }
    return 0;
}