#include <bits/stdc++.h>


using namespace std;

int main(){
    int x, z, j;
    char k, y;
    while(cin >> x >> y >> z >> k >> j){
        if(x == 74 || x == 82){
            x = j - z; 
            cout << x << endl;
        }else if( z == 74 || z == 82){
            z = j - x;
            cout << z << endl;
        }else{
            j = x + z;
            cout  << j  << endl;
            return 0;
        }   
    }
}