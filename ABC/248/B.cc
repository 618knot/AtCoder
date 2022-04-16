#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int B,K;
    long long A;
    cin >> A >> B >> K;

    int i = 0;
    while(1){
        if(A >= B){
            break;
        }
        A = A * K;
        i++;
    }

    cout << i << endl;

    return 0;
}