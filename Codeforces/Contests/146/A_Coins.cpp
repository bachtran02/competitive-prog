#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll n, ll k){
    if (n % 2 == 0 || (k <= n) && n % 2 == k % 2)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        ll n, k; cin >> n >> k;
        if (solve(n, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}