#include <bits/stdc++.h>
#define Z 2*100000
using namespace std;
 
int main(){
    int counter[Z] = {0};
   int N,L,R,X,Q;
   cin >> N;
    int A[Z];
   for(int i = 0;i < N;i++){
       cin >> A[i];
   }

   cin >> Q;
   for(int i = 0;i < Q;i++){
       cin >> L >> R >> X;
       for(int j = L;j <= R;j++){
           if(A[j] == X){
               counter[i]++;
           }
       }
       cout << counter[i] << endl;
   }

    return 0;
}