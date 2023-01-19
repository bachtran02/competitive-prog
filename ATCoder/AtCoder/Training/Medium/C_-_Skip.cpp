#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll res = 0, prev; cin >> prev;

    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        res = __gcd(res, abs(x - prev));
        prev = x;
    }

    cout << res << endl;
    return 0;
}