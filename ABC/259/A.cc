#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;

    if(n > m){
        cout << t << endl;
    }else{
        if(m > x){
            for(int i = 0; i < n - x; i++){
                t -= d;
            }
        }else{
            for(int i = 0; i < x - m; i++){
                t -= d;
            }
        }
        if(t <= 0) t = 1;
        cout << t << endl;
    }
    return 0;
}