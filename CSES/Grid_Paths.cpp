#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1000000007; // 998244353 - another common prime
struct mint{
  int v;
  int val() { return v; }
  mint() : v(0) {}
  mint(ll v) : v(v % MOD) { v += (v < 0) * MOD; }
};

mint& operator+=(mint& a, mint b) { if ((a.v += b.v) >= MOD) a.v -= MOD; return a; }
mint& operator-=(mint& a, mint b) { if ((a.v -= b.v) < 0) a.v += MOD; return a; }
mint operator*(mint a, mint b) { return mint((ll) a.v * b.v); }
mint operator+(mint a, mint b) { return a += b; }
mint operator-(mint a, mint b) { return a -= b; }
mint& operator*=(mint& a, mint b) { return a = a * b; }
mint pow(mint a, ll p) { return p == 0 ? 1 : pow(a * a, p / 2) * (p & 1 ? a : 1); }
mint inv(mint a) { return pow(a, MOD - 2); }
mint operator/(mint a, mint b) { return a * inv(b); }

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<string> m(n);
    for (auto &i : m)
        cin >> i;

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cin >> m[i][j];
    }

    // edge case: block at (0, 0) -> no path possible
    if (m[0][0] == '*'){
        cout << 0 << endl;
        return 0;
    }

    vector<vector<mint>> dp(n + 1); 
    for (auto &i : dp)
        i.resize(n + 1, 0);

    dp[1][1] = 1;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (m[i-1][j-1] != '*')
                dp[i][j] += dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[n][n].v << endl;
}