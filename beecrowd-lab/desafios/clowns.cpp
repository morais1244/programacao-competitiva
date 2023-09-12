#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    
    for(int j = 0 ; j < t; j ++){
        cin >> n;
        int v[n];
        for (int i = 0 ; i < n; i++){
            cin >> v[i];
        }
        int maior = v[0];
        for (int i = 0 ; i < n; i++){
            if(maior < v[i])
                maior = v[i];
        }
        cout << "Case " << j+1 << ": " << maior << endl;

    }
    return 0;
}