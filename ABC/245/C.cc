#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;

    vector<int> A(N + 1);
    vector<int> B(N + 1);
    for(int i = 1;i <= N;i++){
        cin >> A[i];
    }
    for(int i = 1;i <= N;i++){
        cin >> B[i];
    }

    int max;
    if(*max_element(A.begin(),A.end()) >= *max_element(B.begin(),B.end())){
        max = *max_element(A.begin(),A.end());
    }else{
        max = *max_element(B.begin(),B.end());
    }

    vector<int> X(N + 1);
    int l = 1;
    int m = 0;

    for(int i = 1;i <= N;i++){
        for(int j = 1;j <= max;j++){
            if(A[i] == j || B[i] == j){
                if(l >= 2){
                    for(int k = 1; k <= l;k++){
                        if(X[k] != j){
                            m++;
                        }else if(X[k] == j){
                            m = 0;
                            break;
                        }
                    }

                    if(m == l){
                        X[l] = j;
                        l++;
                        m = 0;
                    }else{
                        m = 0;
                    }
                }else if(l == 1){
                    X[l] = j;
                    l++;
                }
            }
        }
    }

    if(l < N){
        cout << "No" << endl;
        return 0;
    }

    sort(X.begin(),X.end());

    float counter = 0;

    for(int i = 1;i <= N - 1;i++){
        if((i == 1 || i == N ) &&abs(X[i] - X[i + 1]) <= K){
            counter += 1.5;
        }else if(abs(X[i] - X[i + 1]) <= K){
            counter++;
        }else{
            counter = 0;
        }
    }

    if(counter >= N){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }

}