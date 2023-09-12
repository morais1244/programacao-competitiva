#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, h, forca;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        cin >> forca;
        if(h >= forca){
            h += forca;
        }else{
            cout << "NAO" << endl;
            return 0;
        }
    }
    cout << "SIM" << endl;
    return 0;
}   