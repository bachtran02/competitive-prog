#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9 + 5;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, s; cin >> n >> s;
    vector<int> coins(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> coins[i];

    sort(coins.begin(), coins.end());

    vector<vector<int>> dp(n + 5);
    for (auto &i : dp)
        i.resize(s + 5);

    for (int i = 1; i <= s; i++)
        dp[0][i] = INF;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= s; j++){
            if (coins[i] > j){
                dp[i][j] = dp[i - 1][j];
                continue;
            }
            dp[i][j] = min(dp[i - 1][j], dp[i][j - coins[i]] + 1);
        }
    }

    if (dp[n][s] == INF)
        cout << -1 << endl;
    else
        cout << dp[n][s] << endl;
}