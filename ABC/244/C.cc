#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int AK,TK;
    int i = 0;
    int j = 0;
    vector<int> x(2 * N + 1);
    
    int counter = 2 * N + 1;
    int max = 2 * N + 1;

    cout << 1 << endl;

    while(1){
        if(counter == 0){
            break;
        }
        cin >> AK;
        x[i] = AK;
        i++;

            TK = rand() % max + 1;
            while(1){
            //     if(TK == )
            // }
            }

        
        x[i] = TK;
        cout << TK << endl;
        counter--;
        i++;
    }


    return 0;
}