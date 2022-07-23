#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, res = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        int pos; cin >> pos;
        res += min(abs(k - pos), pos);
    }

    cout << res * 2 << endl;
}