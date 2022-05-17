#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a,b;
    cin >> n >> a >> b;

    int sumDigit,ans = 0;

    for(int i = 1;i <= n;i++){
        sumDigit = 0;
        
        int x = i;
        while(x > 0){
            sumDigit += x % 10;
            x /= 10;
        }

        if(sumDigit >= a && sumDigit <= b) ans += i;
    }

    cout << ans << endl;

    return 0;
}