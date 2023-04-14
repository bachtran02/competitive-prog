#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll res = -1;
    vector<ll> arr(n), dp(n);
    
    for (auto &i : arr)
        cin >> i;

    dp[0] = arr[0];
    res = arr[0];
    for (int i = 1; i < n; i++){
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        res = max(dp[i], res);
    }

    cout << res << endl;
    return 0;
}