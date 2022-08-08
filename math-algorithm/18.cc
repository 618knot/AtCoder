#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    int a;
    long long yen[5] = {0};
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 100) yen[1]++;
        else if(a == 200) yen[2]++;
        else if(a == 300) yen[3]++;
        else if(a == 400) yen[4]++;
    }

    cout << yen[1] * yen[4] + yen[2] * yen[3] << endl;

    return 0;
}