#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D ;
 
    string t,a;
    t = "Takahashi";
    a = "Aoki";
    
 
    if(A < C){
        cout << t << endl;
    }else if(A > C){
        cout << a << endl;
    }else if(A == C){
        if(B < D){
            cout << t << endl;
        }else if(B > D){
            cout << a << endl;
        }else if(B == D){
            cout << t << endl;
        }
    }
 
    return 0;
}