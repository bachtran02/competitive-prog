#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1000000007; // 998244353
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

    int TC; cin >> TC;
    while (TC--){
        ll n, k; cin >> n >> k;
        mint res = 0, t = 1;
        vector<int> arr;
        int i = 0;
        while (k){
            res += t * (k % 2);
            t *= n;
            k/=2;
        }
        cout << res.val() << endl;
    }
    return 0;
}