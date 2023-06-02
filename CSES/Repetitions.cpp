#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    int cont1=0 , cont2=0,cont3=0, cont4=0 ,maior = 0;
    int len  = a.length();
    char  seq[len];
    for (int i = 0; i < len; i++){
        seq[i] = a.at(i);
    }
    for(int j = 0 ; j < len ; j++){
        switch(seq[j]){
        case 'A':
            if(j!=0){
            if(seq[j-1] == 'T' || seq[j-1]=='C'||seq[j-1] == 'G')  cont1=0;}
            cont1++;
            if (cont1> maior) maior = cont1;
            break;
        case 'T':
            if(j!=0){
            if(seq[j-1] == 'A' || seq[j-1]=='C'||seq[j-1] == 'G')  cont2=0;}
            cont2++;
            if (cont2> maior) maior = cont2;
            break;
        case 'C':
            if(j!=0){
            if(seq[j-1] == 'A' || seq[j-1]=='T'||seq[j-1] == 'G')  cont3=0;}
            cont3++;
            if (cont3> maior) maior = cont3;
            break;
        case 'G':
            if(j!=0){
            if(seq[j-1] == 'A' || seq[j-1]=='T'||seq[j-1] == 'C')  cont4=0;}
            cont4++;
            if (cont4> maior) maior = cont4;
            break;
        }
    }
    cout << maior;
}



