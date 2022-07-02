#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<vector<int>> query(Q, vector<int>(2));
    for(int i = 0; i < Q; i++){
        for(int j = 0; j < 2; j++){
            cin >> query[i][j];
        }
    }

    int counter = 0;
    for(int i = 0; i < Q; i++){
        if(query[i][0] == 1){
            counter += query[i][1];
        }else{
            cout << S[abs((query[i][1] - counter - 1) % N)] << endl;
        }
    }
    return 0;
}