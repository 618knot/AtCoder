#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S;
    cin >> S;

    string sc[10];
    string num[10];
    bool x[10] = {false};

    for(int i = 0;i < 10;i++){
        num[i] = to_string(i);
        sc[i] = S[i];
    }

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            if(num[j] == sc[i]){
                x[j] = true;
            }
        }
    }

    for(int i = 0;i < 10;i++){
        if(x[i] == false){
            cout << i << endl;
        }
    }
    return 0;
}