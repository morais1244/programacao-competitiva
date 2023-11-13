#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double m[12][12], acc = 0;
    char d;
    cin >> d;
    int s;
    for(int i = 0; i< 12; i++){
        for(int l = 0; l < 12 ; l++){
            cin >> m[i][l];
            if(l > i){
                acc = acc + m[i][l];
                s++;
            }
        }
    }
    if(d == 'M'){
        acc = acc/s;
        cout << acc  << setprecision(1) << fixed << endl;
    }
    if(d == 'S'){
        cout << acc << endl;
    }
 
    return 0;
}