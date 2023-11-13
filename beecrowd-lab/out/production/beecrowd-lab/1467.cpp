#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if( a!= b && b==c){
            cout << "A" << endl;
        }else if(c!=a && a==b){
            cout << "C" << endl;
        }else if(b!=a && a==c){
            cout << "B" << endl;
        }else{
            cout << "*" << endl;
        }
    }

}