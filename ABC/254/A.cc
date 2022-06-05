#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    int preAns = N % 100;

    if(preAns < 10){
        cout << setw(2) << setfill('0') << preAns << endl;
    }else{
        cout << preAns << endl;
    }

    return 0;
}