#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;

  float sum[2] = {0};
  int a = 0;
  for(int i = 0; i < n; i++){
    cin >> a;
    sum[0] += a;
  }
  sum[0] /= 3;
  
  for(int i = 0; i < n; i++){
    cin >> a;
    sum[1] += a;
  }
  sum[1] *= (float)2/(float)3;
  
  cout << sum[0] + sum[1] << endl;

  return 0;
}