#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2;
    while(1){
    cin >> x1  >> y1 >> x2 >> y2;

        if(x1 == 0){
            break;
        }else if (x1 == x2 && y1 == y2)
        {
            cout << 0 << endl;
        }else if (x1 == x2 || y1 == y2)
        {
            cout << 1 << endl;
        }else if (abs(x1-x2) == abs(y1-y2))
        {
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
        
    }
    return 0;

}