#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N,W;
    vector<int> A(N + 1);
    cin >> N >> W;
    for(int i = 1;i <= N;i++){
        cin >> A[i];
    }

    vector<int> st;
    int max;
    sort(A.begin(), A.end());

    for(int i = 1;i <= N;i++){
        if(A[i] <= W){
            st.push_back(A[i]);
            max = i;
        }else{
            max = i;
            break;
        }
    }

    if(N > 1){
        for(int i = 1;i <= max;i++){
            for(int j = i + 1;j <= max;j++){
                int sum2 = A[i] + A[j];
                if(sum2 <= W) st.push_back(sum2);

                if(N > 2){
                    for(int k = j + 1;k <= max;k++){
                        int sum3 = A[i] + A[j] + A[k];
                        if(sum3 <= W) st.push_back(sum3);
                    }
                }
            }
        }
    }
    
    sort(st.begin(),st.end());
    st.erase(unique(st.begin(),st.end()),st.end());

    cout << st.size() << endl;
    return 0;
}