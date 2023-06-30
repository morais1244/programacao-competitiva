#include <stdio.h>
 
int main() {
 
    int a,b,c,s;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b<a){
        for(c=b;c<=a;c++){
            if (c%2==1 || c%2==-1) s+=c;
        }
    }
    else{
        for(c=a;c<=b;c++){
            if (c%2==1 || c%2==-1) s+=c;
        }
    }
    printf("%d",s);
    return 0;
}