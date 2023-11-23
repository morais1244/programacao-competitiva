#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin >> c;
    while(c--){
        int gols;
        int v[3];
        memset(v,0,sizeof(v));
        cin >> gols;
        string p[3];
        p[0]="green";
        p[1]="blue";
        p[2]="red";
        string faz, toma;
        while(gols--){
            cin >> faz >> toma;
            if(faz == "G"){
                if(toma == "R") ++v[0];
                else v[0] += 2;
            }
            else if (faz == "B"){
                if(toma == "G") ++v[1];
                else v[1] += 2;
            }
            else{
                if(toma == "B") ++v[2];
                else v[2] += 2;
            }    
        }
        
         for(int i = 0; i < 3; i++){
             int x = 0;
             while(x < 3 - i -1){
                 if(v[x]>v[x+1]){
                     swap(v[x], v[x+1]);
                     swap(p[x+1],p[x]);
                 }
                 x++;
             }
         }
         if (v[0] == v[1] && v[0] == v[2]) cout << "trempate\n";
             else if(v[2]==v[1]) cout << "empate\n";
             else{
                 cout<<p[2]<<endl;
             }
    }
    return 0;
}