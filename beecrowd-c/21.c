#include <stdio.h>
#include <string.h>

int main(){
    int i, j,k=1,l;
    char palavra[10];
    

    do{
        scanf("%d\n",&k);
        //scanf("%c\n",palavra);
        int len = strlen(palavra);
        for(i=1;i<=14;i++){
            if(i!=14)
                printf("*  ");
            else
                printf("*\n");
        }
        for(j=1;j<=3;j++){
            if(j==2){
                /*switch(len){
                    case 10:
                        l=1;
                        printf("*");
                        while(l<=7)
                            printf(" ");
                        printf("%c",palavra);
                        while(l<=7)
                            printf(" ");
                }*/
                continue;
            }else{
                l=1;
                printf("*");
                while(l<=19){
                    printf("  ");
                    l++;
                }
                printf("*\n");
            }
        }
        for(i=1;i<=14;i++){
            if(i!=14)
                printf("*  ");
            else
                printf("*");
        }
        
    }while(k!=0);
}