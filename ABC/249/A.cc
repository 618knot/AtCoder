#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int c,f,x;
    int a,b,d,e;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int second[2] = {a+c,d+f};
    int walkS[2] = {a,d};
    int dis[2] = {b*a,e*d};
    int v[2] = {b,e};
    long long last[2] = {0};
    int r;

    for(int j = 0;j < 2;j++){
        int i = 0;
        while(i <= x){
            last[j] += dis[j];
            i += second[j];
        }
        r = x - (i - second[j]);
        if(r >= walkS[j]){
            last[j] += dis[j];
        }else if(r < walkS[j]){
            last[j] += v[j] * r;
        }
    }

    if(last[0] > last[1]){
        cout << "Takahashi" << endl;
    }else if(last[0] < last[1]){
        cout << "Aoki" << endl;
    }else{
        cout << "Draw" << endl;
    }
    return 0;
}