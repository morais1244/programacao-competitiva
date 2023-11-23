#include <bits/stdc++.h>

#define PI 3.1415

using namespace std;

int main(){
    int R, L;
    cin >> R >> L;
    int v = (4*PI*R*R*R)/3;
    cout << L/v << endl;
    return 0;
}