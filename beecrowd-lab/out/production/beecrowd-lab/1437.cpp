#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        int x;
        char comeco = 'N';
        cin >> x;
        if(x == 0)
            break;
        string s;
        cin >> s;
        for(int i = 0; i < x ; i++){
           if(s[i] == 'D' && comeco ==  'N')
                comeco = 'L';
            else if (s[i] == 'E' && comeco == 'N')
                comeco = 'O';
            else if (s[i] == 'D' && comeco == 'L')
                comeco = 'S';
            else if (s[i] == 'E' && comeco == 'L')
                comeco = 'N';
            else if (s[i] == 'E' && comeco == 'S')
                comeco = 'L';
            else if (s[i] == 'D' && comeco == 'S')
                comeco = 'O';
            else if (s[i] == 'E' && comeco == 'O')
                comeco = 'S';
            else if (s[i] == 'D' && comeco == 'O')
                comeco = 'N';    
        }
        cout << comeco << endl;
    }
    return 0;
}