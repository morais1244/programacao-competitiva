#include <stdio.h>
 
int main() {
    int i=1,n,x,j;
    scanf("%d %d",&x ,&n);
    while(i<n+1){
        for(j=0;j<x;j++,i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
/* #include <stdio.h>

int main() {
 int num1,num2,cont1,cont2;

 num1=0;
 num2=0;
 cont1=1;
 cont2=0;

scanf("%d%d",&num1,&num2);
   if((1<num1<20)&&(num2<100000)){
     for(cont1=1;cont1<=num2;cont1++){
cont2++;
        if(cont2==num1){
            printf("%d\n",cont1);
            cont2=0;}
          else{
     printf("%d ",cont1);

      }
    }
}
    return 0;
}*/