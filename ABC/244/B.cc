#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string T;
    cin >> N >>T;

    int x = 0;
    int y = 0;

    int a = 0;
    char c;

    for(int i = 0;i < N;i++){
        c = T[i];

        if(c == 'R'){
            a = a + 1;
        }else if(c == 'S'){
            if(a % 4 == 0){
                x = x + 1;
            }else if(a % 4 == 1){
                y = y - 1;
            }else if(a % 4 == 2){
                x = x - 1;
            }else if(a % 4 == 3){
                y = y + 1;
            }
        }
    }

    cout << x << " " << y <<endl;

    return 0;
}