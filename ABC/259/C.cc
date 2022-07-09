#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    int index = 0;
    vector<char> sIn(s.length());
    vector<int> sInd(s.length());
    vector<char> tIn(t.length());
    vector<int> tInd(t.length());
    int diff = t.length() - s.length();
    if(diff < 0){
        cout << "No" << endl;
        return 0;
        }else if(diff == 0){
            if(s == t) cout << "Yes" << endl;
            else cout << "No" << endl;
            return 0;
        }else{
        for(int i= 1; i < s.length(); i++){
            if(s[i] == s[i - 1]) cnt++; sIn[index] = s[i]; sInd[index] = i ; index++;
        }
        if(cnt < diff){
            cout << "No" << endl;
            return 0;
        }else{
            index = 0;
            for(int i = 0; i < t.length(); i++){
                if(t[i] == t[i - 1]) tIn[index] = t[i]; tInd[index] = i; index++;
            }
            int cntt = 0;
            while(1){
                if(cntt == 1234567988788974) break;
                
            }
        }
    }

    return 0;
}