#include <bits/stdc++.h>

using namespace std;


int main(){
    int desc;
    cin >> desc;
    while(desc > 0){
        for(int i = 1; i * i <= desc ; i ++){
            if(i*i<= desc && i > 1){
                cout << " " ;
            }
            cout << i*i ;
        }
        cout << "\n";
        cin >> desc;
    }
    return 0;
}