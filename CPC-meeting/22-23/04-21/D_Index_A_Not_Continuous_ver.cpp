#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll NEG_INF = -1e16;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<ll> arr(n + 1);
    vector<vector<ll>> dp(m + 5);

    for (auto &i : dp)
        i.resize(n + 5);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= m; i++)
        dp[i][0] = NEG_INF;

    dp[0][0] = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (i > j){
                dp[i][j] = NEG_INF;
                continue;
            }
            dp[i][j] = max(dp[i][j-1], dp[i-1][j-1] + arr[j]*i);
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}

/*

-- NOT OPTIMAL -- 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<ll> arr(n), res(m), dp(n, 0);
    ll sum = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i < m){
            res[i] = arr[i];
            sum += arr[i];
            dp[m - 1] += (i + 1) * arr[i];
        }
    }
    
    for (int i = m; i < n; i++){
        int k = -1;
        dp[i] = dp[i - 1];
        ll h = sum;
        for (int j = 0; j < m; j++){
            if (j != 0)
                h += j * (res[j] - res[j - 1]);
            if (dp[i] < dp[i - 1] - h + arr[i] * m){
                dp[i] = dp[i - 1] - h + arr[i] * m;
                k = j;
            }
        }
        if (k == -1)
            continue;

        sum += arr[i] - res[k];
        for (int j = k; j < m - 1; j++){
            res[j] = res[j + 1];
        }
        res[m - 1] = arr[i];
    }
    cout << dp[n - 1] << endl;
    return 0;
}

*/