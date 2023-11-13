#include <bits/stdc++.h>

using namespace std;
double vetor[31];

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            double t,d,maior;
            cin >> t >> d;
            vetor[i] = d/t;
            if(i == 0){
                vetor[0] = d/t;
                maior = vetor[0];
                cout << 1 << endl;
            }
            if(vetor[i] > maior){
                maior = vetor[i];
                cout << i+1 << endl;
            }
        }
    }

    return 0;
}