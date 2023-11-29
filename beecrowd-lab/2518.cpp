#include <bits/stdc++.h>
using namespace std;
 

int main() {
    int n, h, c, l;

    cout << fixed << setprecision(4);
    while(cin >> n >> h >> c >> l){
        double x = sqrt((double)h*h + (double)c*c);

        double ans = l * x * n;
        cout << ans / 10000 << '\n';
    }

    return 0;
}