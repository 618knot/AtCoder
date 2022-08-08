#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, r;
    cin >> n >> r;

    int ans = 1;
  	int cnt = 0;
    for(int i = n; cnt < r; i--){
      	ans *= i;
      	cnt++;
        ans /= cnt;
    }

    cout << ans << endl;

    return 0;
}