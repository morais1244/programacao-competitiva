#include <stdio.h>
#include <ctype.h>

 
int main() {
 
    int n, j, l, x;
    char c;
    scanf("%d",&n);
    for(l = 0; l <n ; l++){
        scanf("%d%c%d",&x, &c, &j);
        if(x == j){
            printf("%d\n",x*j);
        }else if(isupper(c)) printf("%d\n",j-x);
        else printf("%d\n",x+j);
    }
 
    return 0;
}