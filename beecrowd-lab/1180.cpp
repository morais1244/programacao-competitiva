#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i<n;i++){
        cin >> x[i];
    }
    int menor = x[0];
    int menorpos = 0;
    for (int i = 0; i<n;i++){
        if (x[i] < menor){
            menor = x[i];
            menorpos = i;
        }
    }
    cout<< "Menor valor: " << menor << endl;
    cout << "Posicao: " << menorpos << endl;
    return 0;
}