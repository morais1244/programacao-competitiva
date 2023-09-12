#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, D;
    vector <int> def ;
    vector <int> atc ;

    while(cin >> A >> D){
        if(!A && !D){
            break;
        }
        atc.assign(A,0);
        def.assign(D,0);
        for(int i = 0; i < A ; i++){
            cin >> atc[i];
        }
        for(int i = 0; i < D ; i++){
            cin >> def[i];
        }
        
        sort(def.begin(), def.end());
        sort(atc.begin(), atc.end());   
        if(atc[0] < def[1]){
            cout << "Y" << endl;
        }else  
            cout << "N" << endl;
        
    }


    return 0;


}