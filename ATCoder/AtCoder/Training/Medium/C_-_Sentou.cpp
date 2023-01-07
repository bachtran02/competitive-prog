#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll t; cin >> t;
    ll curr = 0, res = 0;

    for (int i = 0; i < n; i++){
        ll a; cin >> a;        
        res += (a >= curr)? t : t - curr + a;
        curr = a + t;
    }

    cout << res << endl;
    return 0;
}