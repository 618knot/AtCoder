#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    vector<int> A(N);
    cin >> N;
    for(int i = 0;i < N;i++) cin >> A[i];

    int counter = 0;
    bool flg = false;
    while (1){
        for(int i = 0;i < N;i++){
            if(A[i] % 2 != 0){
                flg = true;
                break;
            }else A[i] /= 2;
        }
        if(flg) break;
        else counter++;
    }

    cout << counter << endl;
    
    return 0;
}