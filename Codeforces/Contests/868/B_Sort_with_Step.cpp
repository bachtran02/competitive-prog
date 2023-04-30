#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n, k; cin >> n >> k;
    int cnt = 0;

    for (int i = 0; i < n; i++){
        int t; cin >> t;
        if (i % k != (t-1) % k)
            cnt++;
    }

    if (cnt == 0)
        cout << 0 << endl;
    else if (cnt == 2)
        cout << 1 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}