#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n; cin >> n;
    for (ll i = 1; i <= n; i++){

        ll res = ((i - 4) * (i - 4) * (i * i - 8 - 1) \
            +  4 * (i * i - 1 - 2) + 8 * (i * i - 1 - 3) \
            + (i - 4) * 4 * (i * i - 1 - 4) \
            + 4 * (i * i - 1 - 4) + (i - 4) * 4 * (i * i - 1 - 6)) / 2;
        cout << res << endl; 
    }
    return 0;
}