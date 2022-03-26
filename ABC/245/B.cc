#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
 
    vector<int> A(N + 1);
    for(int i = 1;i <= N;i++){
        cin >> A[i];
    }
 
    vector<bool> flg(N + 1);
 
    for(int i = 1;i <= N;i++){
        for(int j = 0;j <= N;j++){
            if(A[i] == j){
                flg[j] = true;
                break;
            }
        }
    }
 
    for(int j = 0;j <= N;j++){
        if(flg[j] == false){
            cout << j << endl;
            break;
        }
    }
 
    
 
    return 0;
}