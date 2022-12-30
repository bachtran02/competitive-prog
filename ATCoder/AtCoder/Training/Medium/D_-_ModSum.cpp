#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll res = 0, n; cin >> n;
    for (ll i = 1; i <= n - 1; i++){
        res += i;
    }
    
    cout << res << endl;
    return 0;
}