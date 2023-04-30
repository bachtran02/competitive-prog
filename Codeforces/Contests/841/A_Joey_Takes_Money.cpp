#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    ll res = 1;

    for (int i = 0; i < n; i++){
        int t; cin >> t;
        res *= t;
    }

    res += n - 1;
    cout << res * 2022 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}