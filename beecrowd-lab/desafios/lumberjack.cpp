#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, lumbj[10];
    cin >> n;
    cout << "Lumberjacks:\n";
    while(n--){
        int m = 0;
        for(int i = 0; i< 10 ; i++){
            cin >> lumbj[i];
        }
        for(int i=0; i<9; i++){

			if(lumbj[i]>lumbj[i+1]){
				m++;
			}
			if (lumbj[i]<lumbj[i+1]){
				m--;
			}
		}
        m = abs(m);

		if(m==9){
			cout << "Ordered\n";
		}
		else{
			cout << "Unordered\n";
		}
    }
    return 0;
}
