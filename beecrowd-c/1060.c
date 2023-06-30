#include <stdio.h>
 
int main() {
 
    float t;
    int i,j =0;
    for(i=0;i<6;i++){
        scanf("%f",&t);
        if(t>0) j++;
    }
    printf("%d valores positivos\n", j);
    return 0;
}