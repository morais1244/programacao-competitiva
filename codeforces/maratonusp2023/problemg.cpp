#include <bits/stdc++.h>

using namespace std;

int factorial1(int n)
{
    int ret = 1;
    while (n > 1)
        ret *= n--;
    return ret;
}
int main(){
    int m,n,x,y;
    cin >> m >> n >> x >> y;
    int result = factorial1(m+n)/(factorial1(m)*factorial1(n));
    int minus = factorial1(x+y)/(factorial1(x)*factorial1(y));
    cout << result - minus << endl;
    
}