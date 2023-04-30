#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll res = -1;
    vector<vector<ll>> dp(100005);
    for (auto &i : dp)
        i.resize(10, 0);

    int max_t = -1;
    for (int i = 0; i < n; i++){
        int t, x;
        ll a;
        cin >> t >> x >> a;
        if (x <= t)
            dp[t][x+1] = a;
        if (t > max_t)
            max_t = t;
    }

    for (int i = 1; i <= max_t; i++){
        for (int j = 1; j <= 5; j++){
            dp[i][j] += max(max(dp[i-1][j-1], dp[i-1][j]), dp[i-1][j+1]);
            
            if (dp[i][j] > res)
                res = dp[i][j];
        }
    }
    cout << res << endl;
    return 0;
}