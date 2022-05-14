#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S;
    cin >> S;

    string out;
    int ctrl = 0;

    for(int i = 0;i < 6;i++){
        out += S[ctrl];
        if(ctrl == S.length() - 1){
            ctrl = 0;
        }else ctrl++;
    }

    cout << out << endl;

    return 0;
}