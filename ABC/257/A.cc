#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, X;
    cin >> N >> X;

    int cnt = 0;
    for(char moji = 'A'; moji <= 'Z'; moji++){
        for(int i = 0; i < N; i++){
            cnt++;
            if(cnt == X) cout << moji << endl;
        }
    }
    return 0;
}