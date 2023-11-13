#include <bits/stdc++.h>

using namespace std;

int main(){

    int cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
    int list;
    cin >> list;
    vector <int> lista;
    lista.assign(list, 0);
    for(int i = 0; i < lista.size(); i++ ){
        cin >> lista[i];
        if(lista[i] % 2 == 0){
            cont2++;
        }
        if(lista[i] % 3 == 0){
            cont3++;
        }
        if(lista[i] % 4 == 0){
            cont4++;
        }
        if(lista[i] % 5 == 0){
            cont5++;
        }
    }

    cout << cont2 << " Multiplo(s) de 2" << endl;
    cout << cont3 << " Multiplo(s) de 3" << endl;
    cout << cont4 << " Multiplo(s) de 4" << endl;
    cout << cont5 << " Multiplo(s) de 5" << endl;




    return 0;
}