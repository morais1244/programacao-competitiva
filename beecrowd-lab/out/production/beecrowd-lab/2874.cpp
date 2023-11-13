#include <bits/stdc++.h>

using namespace std;

int bintodec(int bin){
    int dec = 0, i;
 
    for(i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    }
    return dec;
}
int main(){
    int x;
    while(scanf("%d",&x) != EOF){
        int bins[x];
        int decs[x];
        for(int i = 0; i < x ; i++){
            cin >> bins[i];
            decs[i] = bintodec(bins[i]);
        }
        for(int i = 0; i < x ; i++){
            printf("%c", decs[i]);
        }
    printf("\n");
    }
}
    
    
    
