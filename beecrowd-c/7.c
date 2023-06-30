#include <stdio.h>

int main(){
    int f_1 = 1, f_2 = 1, f_3, n,i;
    scanf("%d", &n);
    if(n==1 || n == 2){
        f_3 = 1;
        printf("%d\n",f_3);
        return 0;
    }
    for(i=3; i<=n;i++){
        f_3 = f_1 + f_2;
        f_1 = f_2;
        f_2 = f_3;
    }
    printf("%d\n",f_3);
    return 0;

}