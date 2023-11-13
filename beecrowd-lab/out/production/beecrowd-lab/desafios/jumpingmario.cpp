#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        int walls, high=0, low=0;
        cin >> walls;
        int wall[walls];
        for(int l = 0; l < walls ; l++){
            if(l == 0){
                cin >> wall[l];
            }else{
                cin >> wall[l];
                if(wall[l] > wall[l-1]){
                    high++;
                }else if (wall[l] == wall[l-1]){
                    continue;
                }else if(wall[l] < wall[l-1])
                    low++;   
            }
        }  

        cout << "Case " << i+1 << ": " << high << " " << low << endl;
    }

    return 0;

}