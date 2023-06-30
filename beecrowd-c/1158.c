#include <stdio.h>
 
int main() {
 
    int i,x,y,n,s,k;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s = 0;
        scanf("%d %d",&x,&y);
        if((x%2)==0){
            x+=1;
        }
        for(k=1;k<=y;k++){
            s+=x;
            x+=2;
        }
        printf("%d\n",s);
    }
    return 0;
}