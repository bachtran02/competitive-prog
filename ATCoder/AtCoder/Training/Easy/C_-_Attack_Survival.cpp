#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> arr(n + 1, k);
    for (ll i = 0; i < q; i++){
        ll a; cin >> a;
        arr[a]++;
    }

    for (ll i = 1; i <= n; i++){
        if (arr[i] > q)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}