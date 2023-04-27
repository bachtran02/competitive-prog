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
    vector<mint> dp(n + 5);
    mint cur_sum = 1;

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++){
        if (i <= 6){
            dp[i] = dp[i - 1] * 2;
            cur_sum += dp[i];
            continue;
        }
        dp[i] = cur_sum - dp[i - 7];
        cur_sum += dp[i] - dp[i - 7]; 
    }

    cout << dp[n].v << endl;
    return 0;
}