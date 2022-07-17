#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    vector<int> math(n);
    vector<int> eng(n);
    vector<int> sum(n);
    vector<int> tmp1(n);
    vector<int> tmp2(n);
    vector<int> tmp3(n);
    vector<int> pass(x+y+z);
    for(int i = 0; i < n; i++){
        cin >> math[i];
        tmp1[i] = math[i];
    }
    for(int i = 0; i < n; i++){
        cin >> eng[i];
    }

    sort(tmp1.begin(), tmp1.end(), greater<int>());
    
    
    int passind = 0;
    int tmpind = 0;
    for(int i = 0; i < n; i++){
        if(tmpind == x) break;
        if(tmp1[tmpind] == math[i]){
            pass[passind] = i;
            // cout << "ma" << i << endl;
            passind++;
            tmpind++;
            math[i] = -1;
            eng[i] = -1;
            i = 0;
        }
    }

    for(int i = 0; i < n; i++){
        tmp2[i] = eng[i];
    }
    sort(tmp2.begin(), tmp2.end(), greater<int>());

    tmpind = 0;
    for(int i = 0; i < n; i++){
        if(tmpind == y) break;
        if(tmp2[tmpind] == eng[i]){
            pass[passind] = i;
            // cout << "en" << i << endl;
            passind++;
            tmpind++;
            math[i] = -1;
            eng[i] = -1;
            i = 0;
        }
        // cout << "etmp" << tmpind << endl;
    }


    for(int i = 0; i < n; i++){
        sum[i] = math[i] + eng[i];
        tmp3[i] = sum[i];
    }
    sort(tmp3.begin(), tmp3.end(), greater<int>());


    tmpind = 0;
    for(int i = 0; i < n; i++){
        if(tmpind == z) break;
        if(tmp3[tmpind] == sum[i]){
            pass[passind] = i;
            // cout << "su" << i << endl;
            passind++;
            tmpind++;
            sum[i] = -1;
            i = 0;
        }
    }

    sort(pass.begin(), pass.end());

    for(int i = 0; i < pass.size(); i++){
        cout << pass[i] + 1 << endl;
    }

    return 0;
}