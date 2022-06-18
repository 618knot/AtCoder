#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    int ans = 1;
    cin >> N;

    for(int i = 0; i < N; i++) ans = ans * 2;

    cout << ans << endl;
    return 0;
}