#include <bits/stdc++.h>
 
using namespace std;

int vetor[101];
 
int main() {
    
    int n, c, s;
    cin >> n >> c >> s;
    int i = 1;
    vetor[i];
    while(c--){
        int comando;
        cin >> comando;
        if (comando == 1) {
            i++;
            if (i == n + 1) i = 1;
        } else {
            i--;
            if (i == 0) i = n;
        }
        vetor[i]++;
    }
    cout << vetor[s] << endl;
    return 0;
}