#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> w(n + 5), p(n + 5);
    vector<vector<int>> dp(n + 5);

    for (int i = 1; i <= n; i++)
        cin >> w[i];

    for (int i = 1; i <= n; i++)
        cin >> p[i];

    dp.assign(n + 5, vector<int>(x + 5, 0));
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= x; j++){
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
                dp[i][j] = max(dp[i-1][j - w[i]] + p[i], dp[i][j]);
        }
    }

    cout << dp[n][x] << endl;
}