#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll l, r; cin >> l >> r;

    if (r - l >= 673)
        cout << 0 << endl;
    else{
        ll minn = 2020;
        for (ll i = l; i < r; i++){
            for (ll j = i + 1; j <= r; j++){
                minn = min(minn, ((i % 2019) * (j % 2019)) % 2019);
            }
        }
        cout << minn << endl;
    }
    return 0;
}