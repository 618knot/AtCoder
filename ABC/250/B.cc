#include <bits/stdc++.h>
using namespace std;

void outtilerow(int B,char *a){
    for(int i = 0;i < B;i++){
        cout << a;
    }
}
 
int main(){
    int N,A,B;
    cin >> N >> A >> B;
    for(int k = 0;k < N;k++){
        if(k % 2 == 0){
            for(int j = 0;j < A;j++){
                for(int i = 0;i < N;i++){
                    if(i % 2 == 0){
                        outtilerow(B,".");
                    }else if(i % 2 == 1){
                        outtilerow(B,"#");
                    }
                }
                cout << endl;
            }
        }else if(k % 2 == 1){
            for(int j = 0;j < A;j++){
                for(int i = 0;i < N;i++){
                    if(i % 2 == 0){
                        outtilerow(B,"#");
                    }else if(i % 2 == 1){
                        outtilerow(B,".");
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}