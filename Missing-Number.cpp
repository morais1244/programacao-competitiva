#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, sum = 0, x, b;
    cin >> a;
    x = ((a)*(a+1))/2;
    for(int i = 0;i<a-1;i++){
        cin >> b;
        sum += b;
    }
    cout << x - sum;
}
