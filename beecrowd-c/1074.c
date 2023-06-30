#include <stdio.h>
 
int main() {
 
    int i, j,X;
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf ("%d",&X);
        if(X==0)
            printf("NULL\n");
        else if(X<=0&&X%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(X<=0&&X%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(X>=0&&X%2==0)
            printf ("EVEN POSITIVE\n");
        else if(X>=0&&X%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}