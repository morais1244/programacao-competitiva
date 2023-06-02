#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long b;
    cin >> b;
    while(true){
        cout << b << " ";
        if (b==1) break;
        if(b%2==0) b /= 2;
        else b = b*3 + 1;
    }
    cout << "\n";
    return 0;
}
