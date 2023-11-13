#include <bits/stdc++.h>
 
using namespace std;

void CombSort (int vet[], int tam){
	int i, j, gap, swapped = 1,k;
	int aux;
	gap = tam;
	while(gap > 1 || swapped == 1){
		gap = gap * 10 / 13;
		if (gap == 9 || gap == 10) gap = 11;
		if (gap < 1) gap = 1;
		swapped = 0;
		for(i = 0, j = gap; j < tam; i++, j++){
			if(vet[i] < vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				swapped = 1;
			}
		} 
	}
}

int busca(int n, int *v, int num){
    int i;
    for(i = 0; i<n; i++){
        if(v[i]== num){
            return i;
        }
    }
    return -1;
}

int main() {
 
    int x;
    cin >> x;
    while(x--){
        int n, k, id, h, w, l,volume, indice;
        int tamanhos[n];
        int tamanhosAux[n];
        int ids[n];
        cin >> n >> k;
        for(int i = 0; i < n ; i++){
            cin >> id >> h >> w >> l;
            volume = h*w*l;
            tamanhos[i] = volume;
            tamanhosAux[i] = volume;
            ids[i] = id;
        }
        
        CombSort(tamanhos, n);
        for(int i = 0 ; i < k; i++){
            indice = busca(n, tamanhosAux,tamanhos[i]);
            cout << ids[indice];
            if(k>1){
                cout << " ";
            }
        }
        cout << "\n";
    }
 
    return 0;
}