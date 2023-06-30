#include <stdio.h>
 
int main()
{
    int i,num,t=0,h=0,x=0,y=0;
    for(i=1;i<=5;i++){
        scanf("%d",&num);
        if(num%2==0) t++;
        if(num%2==1||num%2==-1) h++;
        if(num>0) x++;
        if(num<0) y++;
    }
    printf("%d valor(es) par(es)\n",t);
    printf("%d valor(es) impar(es)\n",h);
    printf("%d valor(es) positivo(s)\n",x);
    printf("%d valor(es) negativo(s)\n",y);
    return 0;
}