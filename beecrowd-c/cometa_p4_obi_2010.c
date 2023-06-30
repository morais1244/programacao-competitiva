#include <stdio.h>

int main(){
    int data;
    scanf("%d",&data);
    if ((data%76)==0){
        printf("%d",data+76); 
        return 0;
        }
    float x;
    x = (data-1986)/76;
    x = (int)x;
    x++;
    printf("%f\n",x);
    data = x*76+1986;
    printf("%d",data);
    return 0;
}