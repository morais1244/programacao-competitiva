#include <bits/stdc++.h>

using namespace std;

int main (){
    int x;
    cin >> x;

    while(x--){
        char palavra[50];
        scanf("%s",palavra);
        int num;
        cin >> num;
        for(int i = 0; palavra[i] != '\0'; i++){
            palavra[i] = ((palavra[i] - 'A' - num + 26) % 26) + 'A';
        }
        for(int i = 0; palavra[i] != '\0'; i++){
            cout << palavra[i];
        }
        cout << "\n";
    }


    return 0;
}