#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;

    while(n--){
        int k = 3;
        int joao = 0, maria = 0;
        while(k--){
            int x,d;
            cin >> x >> d;
            joao += x*d;
        }
        k=3;
        while(k--){
            int x,d;
            cin >> x >> d;
            maria += x*d;
        }
        if(maria>joao){
            cout<< "MARIA" << endl;
        }
        if(joao>maria){
            cout << "JOAO" <<endl;
        }
    }
    return 0;
}