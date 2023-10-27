#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >> x;
    while(x--){
        int c, d;
        cin >> c >> d;
        if (c == 0 && d == 0) cout << 0 << '\n';
        else
        {
            long long ans = 1;
            while (c) {ans *= 26; --c;}
            while (d) {ans *= 10; --d;}
           
            cout << ans << '\n';
        }
   
    }
    return 0;
}