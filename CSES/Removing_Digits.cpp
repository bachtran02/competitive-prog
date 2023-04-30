#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<int> dp(n + 5);

    for (int i = 1; i <= 9; i++)
        dp[i]++;

    for (int i = 10; i <= n; i++){
        char char_max = '0' - 1;
        for (char c : to_string(i)){
            if (c > char_max)
                char_max = c;
        }
        dp[i] = dp[i - (char_max - '0')] + 1;
    }
    cout << dp[n] << endl;
}