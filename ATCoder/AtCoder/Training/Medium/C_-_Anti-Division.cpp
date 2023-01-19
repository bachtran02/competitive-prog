#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt_d(ll x1, ll x2, ll d){
    ll cnt = 0;
    if (x1 % d != 0)
        x1 += d - x1 % d;
    if (x2 % d != 0)
        x2 -= x2 % d;
    return (x2 - x1)/d + 1;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll lcm = (c/__gcd(c, d)) * d;
    ll res = (b - a + 1) - (cnt_d(a, b, c) + cnt_d(a, b, d) - cnt_d(a, b, lcm));
    cout << res << endl;
    return 0;
}