#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    map<int, int> m;
    int cnt_t = 0;

    for (int i = 0; i < n; i++){
        int t; cin >> t;
        if (t == 0)
            cnt_t++;
        else
            m[t]++;
    }

    for (auto i : m){
        if (n - cnt_t - i.second >= i.first)
            cnt_t += i.second;
        else{
            if (i.first <= n - cnt_t){
                cout << -1 << endl;
                return;
            }
        }
    }

    cout << n - cnt_t << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}