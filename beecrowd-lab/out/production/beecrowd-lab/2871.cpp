#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF){
        int m[a][b];
        int litros = 0;
        int saca = 0;
        for(int i = 0; i < a; i++){
            for( int j = 0; j<b; j++){
                cin >> m[i][j];
                litros += m[i][j];
            }
        }
        while(litros>=60){
            saca+=1;
            litros-=60;
        }
        cout << saca << " saca(s) e "<< litros<< " litro(s)" << endl;
    }
}