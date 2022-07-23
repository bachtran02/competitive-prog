#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main(){
    ll h, w, res;
    cin >> h >> w;

    // edge case: when h or w equals to 1
    if (h == 1 || w == 1){
        cout << 1 << endl;
        return 0;
    }

    res = (h * w) / 2;
    if ((h * w) % 2 != 0)
        res++;
    cout << res << endl;
}