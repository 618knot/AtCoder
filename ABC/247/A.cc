#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S;
    cin >> S;

    S.insert(0,"0");
    S.pop_back();

    cout << S << endl;

}