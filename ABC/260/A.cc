#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;

    if(s[0] != s[1] && s[1] != s[2] && s[0] != s[2]) cout << s[0] << endl;
    if(s[0] == s[1] && s[1] == s[2] && s[0] == s[2]) cout << -1 << endl;
    if(s[0] == s[1] && s[1] != s[2] && s[0] != s[2]) cout << s[2] << endl;
    if(s[0] != s[1] && s[1] == s[2] && s[0] != s[2]) cout << s[0] << endl;
    if(s[0] != s[1] && s[1] != s[2] && s[0] == s[2]) cout << s[1] << endl;
    return 0;
}