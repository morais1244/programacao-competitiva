#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if((a + b == c) || (a + c == b) || (b + c == a) || (a == b) || (a == c) || (b == c))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;

}