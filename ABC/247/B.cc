#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
 
    string s[100];
    string t[100];
 
    for(int i = 0;i < N;i++){
        cin >> s[i] >> t[i];
    }
 
    int smark[100] ={0};
    int tmark[100] ={0};
 
    for(int i = 0;i < N;i++){
        for(int j = 0;j < i;j++){
            if(s[i] == s[j] || s[i] ==t[j]){
                smark[i] = smark[i] + 1;
            }
            if(t[i] == s[j] || t[i] ==t[j]){
                tmark[i] = tmark[i] + 1;
            }
        }
        for(int k = i + 1;k < N;k++){
            if(s[i] == s[k] || s[i] ==t[k]){
                smark[i] = smark[i] + 1;
            }
            if(t[i] == s[k] || t[i] ==t[k]){
                tmark[i] = tmark[i] + 1;
            }
        }
    }
 
    for(int i = 0;i < N;i++){
        if(smark[i] >= 1 && tmark[i] >= 1){
            cout << "No" << endl;
            return 0;
        }
    }
 
    cout << "Yes" << endl;
 
    return 0;
}