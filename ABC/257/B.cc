#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(K);
    vector<int> L(Q);
    vector<bool> sq(N, false);
    int ans[201];
    for(int i = 0; i < K; i++) cin >> A[i];
    for(int i = 0; i < Q; i++) cin >> L[i];
    
    for(int i = 0; i < K; i++){
        sq[A[i] - 1] = true;
    }

    for(int i = 0; i < Q; i++){
        int counter = 0, flg = -1;
        
        for(int j = 0; j < N; j++){
            if(sq[j] == true) counter++; flg = j;
            if(counter == L[i]) break;
        }

        if(flg + 1 == N) continue;
        else if(sq[flg + 1] == true) continue;
        else{
            sq[flg] = false;
            sq[flg + 1] = true;
        }

 
}



for(int i = 0; i < N; i++){
    if(sq[i] == true) cout << i + 1 << " ";
}
cout << endl;

    return 0;
}