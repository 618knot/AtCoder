#include <bits/stdc++.h>
using namespace std;

 
int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> a(N+1);
    vector<int> ball(N+1);
    int tmp,index;
    for(int i = 0;i < N;i++){
        cin >> a[i + 1];
        ball[i + 1] = i + 1;
    }

    for(int i = 1;i <= Q;i++){
        if(a[i] == N){
            if(ball[N-1] == a[i]){
                tmp = ball[N - 1];
                ball[N - 1] = ball[N];
                ball[N] = tmp;
            }else{
                if(ball[a[i]] == a[i]){
                    tmp = ball[i + 1];
                    ball[i + 1] = ball[i];
                    ball[i] = tmp;
                }else if(ball[a[i]] > a[i]){
                    for(int j = a[i]+1;j < N;j++){
                        if(ball[j] == a[i]){
                            index = j;
                            break;
                        }
                    tmp = ball[index + 1];
                    ball[index + 1] = ball[index];
                    ball[index] = tmp;
                    }
                }else if(ball[a[i]] < a[i]){
                    for(int j = a[i]-1;j > 0;j--){
                        if(ball[j] == a[i]){
                            index = j;
                            break;
                        }
                    tmp = ball[index + 1];
                    ball[index + 1] = ball[index];
                    ball[index] = tmp;
                    }
                }
            }
        }
    }

    for(int i = 0;i < N;i++){
        cout << ball[i];
    }
    cout << endl;

    return 0;
}