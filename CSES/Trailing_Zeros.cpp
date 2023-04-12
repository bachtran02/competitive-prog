#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n; cin >> n;
    ll res = 0;
    
    for (ll i = 5; i <= n; i *= 5){
        res += (n / i);
    }
    cout << res << endl;
    return 0;
}