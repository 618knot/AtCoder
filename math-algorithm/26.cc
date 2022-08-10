#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;

  double ans = 0;

  for(int i = n; i >= 1; i--){
    ans += 1.0 * n / i;
  }
  cout << fixed << setprecision(15) << ans << endl;

  return 0;
}