#include <stdio.h>
 
int main() {
 
    float k=0 ,t,j=0,x;
    int i;
    for(i=0;i<6;i++){
        scanf("%f",&t);
        if(t>0){
            j++;
            k += t;
        }
    }
    x= k/j;
    printf("%.0f valores positivos\n", j);
    printf("%.1f\n",x);
    return 0;
}