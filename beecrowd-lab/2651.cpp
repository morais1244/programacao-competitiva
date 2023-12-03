#include <bits/stdc++.h>


using namespace std;


int main(){
    string zelda;
    const string z = "zelda";
    while(getline(cin,zelda)){
        transform(zelda.begin(), zelda.end(), zelda.begin(),::tolower);
    cout << "Link " << ((zelda.find(z)!= std::string::npos)? "Bolado" : "Tranquilo") << endl;
    }

    return 0;

}