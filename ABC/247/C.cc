#include <bits/stdc++.h>
using namespace std;



string Sn(int n){
    string S;
    if(n == 1){
        S = "1";
        return S;
    }else{
        S = Sn(n - 1) + " "  + to_string(n) + " " + Sn(n - 1);
        return S;
    }
    
}
 
int main(){
    int N;
    cin >> N;
    
    cout << Sn(N) << endl;
    
    return 0;
}