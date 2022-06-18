#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    
    bool pl[4] = {false};
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int P = 0;
    for(int i = 0; i < N; i++){
 
        pl[0] = true;
        for(int j = 0; j < 4; j++) cout << " " << pl[j] ;
        cout << endl;
        for(int j = 3; j >= 0; j--){

            if(j + A[i] > 3 && pl[j] == true){
                P++;
                pl[j] = false;
            }else if(pl[j] == true){
                pl[j + A[i]] = true;
                pl[j] = false;
            }
        }
    }

    cout << P << endl;
    return 0;
}