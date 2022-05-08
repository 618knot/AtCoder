#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int H,W,R,C;
    cin >> H >> W >> R >> C;

    int answer=4;
    
    if(R == 1 ){
        answer -= 1;
    }

    if(R == H){
        answer -= 1;
    }

    if(C == 1){
        answer -= 1;
    }

    if(C == W){
        answer -= 1;
    }

    cout << answer << endl;

    return 0;
}