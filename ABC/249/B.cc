#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S;
    cin >> S;

    int n = S.length();
    int big,small = 0;
    int point = 0;

    for(int i = 0;i < n;i++){
        if(big > 0 && small > 0){
            break;
        }
        
        if(islower(S[i])){
            small++;
        }else{
            big++;
        }
    }

    if(big == 0 || small == 0){
        cout << "No" << endl;
        return 0;
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(S[i] == S[j]){
                point++;
            }
            if(point > n){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}