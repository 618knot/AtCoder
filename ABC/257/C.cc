#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    string S;
    cin >> N >> S;
    vector<int> W(N);
    for(int i = 0; i < N; i++){
        cin >> W[i];
    }
    int counter[2] = {0};
    for(int i = 0; i < N; i++){
        if(S[i] == '0') counter[0]++;
        else counter[1]++;
    }
    if(counter[0] == N || counter[1] == N) cout << N << endl;

    
    return 0;
}