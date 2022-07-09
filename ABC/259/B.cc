#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a, b , d;
    cin >> a >> b >> d;
    long double pi = acos(-1);
    long double rad = d * pi / 180;
    long double x = a * cos(rad) - sin(rad) * b;
    long double y = a * sin(rad) + b * cos(rad);
    cout << fixed << setprecision(7) << x << " " << fixed << setprecision(7) << y << endl;

    return 0;
}