#include<stdio.h>
#include<string.h>

int main (){

    char p[7]="PAR",imp[7]="IMPAR",ad1[7],ad2[7],n1[50],n2[50];
    long int vezes=0,i=0,a,b,s=0;
    scanf("%d",&vezes);

            for(i=1; i<=vezes; i++){
                scanf("%s %s %s %s ",n1,ad1,n2,ad2);
                scanf("%ld %ld",&a,&b);
                s=s+a+b;

                    if(strcmp(ad1,p)==0){
                            if(s%2==0)
                                printf("%s\n",n1);

                    }
                    if(strcmp(ad2,p)==0){
                            if(s%2==0)
                                printf("%s\n",n2);

                    }
                    if(strcmp(ad1,imp)==0){
                            if(s%2!=0)
                                printf("%s\n",n1);

                    }

                    if(strcmp(ad2,imp)==0){
                            if(s%2!=0)
                                printf("%s\n",n2);

                    }

            }
    return 0;
}