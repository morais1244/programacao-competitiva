#include <stdio.h>
 
int main() {
 
    int n,k,j,i;
    k = 1;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<3;j++,k++){
            printf("%d ",k);
        }
        printf("PUM\n");
        k++;
    }
    return 0;
}