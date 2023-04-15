#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n; cin >> n;
    ll k = n % 998244353;
    if (k >= 0)
        cout << k << endl;
    else
        cout << 998244353 + k << endl;
    return 0;
}