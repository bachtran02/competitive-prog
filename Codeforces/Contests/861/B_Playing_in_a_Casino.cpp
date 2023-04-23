#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n, m; cin >> n >> m;
        vector<priority_queue<int, vector<int>, greater<int>>> arr(m);
        vector<ll> sum(m);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                int t; cin >> t;
                sum[j] += t;
                arr[j].push(t);
            }
        }
        ll res = 0;
        for (int i = 0; i < m; i++){
            ll cur = 0;
            for (int j = 0; j < n; j++){
                ll t = arr[i].top();
                cur += t;
                res += sum[i] - cur - t * (n - 1 - j);
                arr[i].pop();
            }
        }
        cout << res << endl;
    }
    return 0;
}