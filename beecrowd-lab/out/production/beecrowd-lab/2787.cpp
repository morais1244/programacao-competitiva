#include <iostream>

using namespace std;


int main(){
    int linha, coluna;
    
    cin >> linha;
    cin >> coluna;

    if (((linha + coluna) % 2 ) == 0){
        cout << 1 << endl;

    }else{
        cout << 0 << endl;
    }



}