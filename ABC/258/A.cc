#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int K;
    cin >> K;

    int h = 21 + K / 60;
    int m = K % 60;

    if(m < 10) cout << h << ":" << 0 << m << endl;
    else cout << h << ":" << m << endl;
    return 0;
}