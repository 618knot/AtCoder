#include <bits/stdc++.h>
using namespace std;

long long f(long long n) {
    if(n == 0) {
        return 1;
    }

    return f(n / 2) + f(n / 3);
}

int main() {
    long long n;
    cin >> n;
    cout << f(n) << endl;
}