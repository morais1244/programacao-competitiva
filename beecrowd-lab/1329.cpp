#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int part[n];
        int mary= 0 , john= 0;
        for(int i = 0; i< n ; i++){
            cin >> part[i];
            if(part[i] == 0){
                mary++;
            }else{
                john++;
            }
        }
        cout << "Mary won " << mary <<  " times and John won " <<john<< " times" << endl;

    }
}