#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,ant,prox,x;
    vector<int> freq;
    while(cin >> n){
        if(n == 0)
            break;
        x = 0;
        freq.assign(n,0);
        for(int i = 0; i< n; i++){
            cin >> freq[i];
        }
        for(int l = 0; l< n; l++){
            ant = freq[((l-1)+n)%n];
            prox = freq[(l+1)%n];
            if((freq[l] < prox && freq[l] < ant) || (freq[l] > ant && freq[l] > prox))
                ++x;
        }
        cout << x << endl;
    }
    
 
    return 0;
}