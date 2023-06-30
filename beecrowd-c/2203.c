#include <stdio.h>
#include <math.h>

 
int main() {
 
    int xf,yf,xi,yi,r1,r2,vi;
    while(scanf("%d %d %d %d %d %d %d",&xf,&yf,&xi,&yi,&vi,&r1,&r2)!=EOF){
        float df_i = sqrt((xi-xf)*(xi-xf) + (yi-yf)*(yi-yf));
        float dist = vi*1.5;
        float distt = dist + df_i;
        if(distt <= r1+r2) printf("Y\n");
        else printf("N\n");

    }

 
    return 0;
}