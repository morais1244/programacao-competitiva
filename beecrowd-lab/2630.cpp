#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        int r,g,b;
        cin >> s;
        cin >> r >> g >> b;
        if(s == "min"){
            cout << "Case #" << i+1 << ": " << std::min({r,g,b}) << endl;
        }else if (s == "max")
        {
            cout << "Case #" << i+1 << ": "<< std::max({r,g,b}) << endl;
        }else if(s == "mean"){
            cout << "Case #" << i+1 << ": " << (int)(r+g+b)/3 << endl;

        }else if(s == "eye"){
            cout << "Case #" << i+1 << ": " << (int)(r*0.3 + 0.59*g + 0.11*b) << endl;
        }
    }

    return 0;
}