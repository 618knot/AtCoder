#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    
    for(int i = 1;i <= N;i++){
        cin >> a[i];
    }

    for(int i = 1;i <= N;i++){
       if(a[i] > a[i + K] && i + K <= N){
           swap(a[i], a[i + K]);
       } 
    }

    for(int i = 1;i < N;i++){
        if(a[i + 1] - a[i] < 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}