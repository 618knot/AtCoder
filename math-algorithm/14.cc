#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long N;
    cin >> N;

    bool flg = false;
    for(long long i = 2; i * i <= N; i++) {
        while(N % i == 0) {
            if(flg == true) cout << " ";
            flg = true;
            N /= i;
            cout << i;
        }
    }

    if(N >= 2) {
        if(flg == true) cout << " ";
        flg = true;
        cout << N;
    }
    cout << endl;

    return 0;
}