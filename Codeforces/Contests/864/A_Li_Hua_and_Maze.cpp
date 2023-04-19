#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        ll n, m; cin >> n >> m;
        int res = 5;
        for (int i = 0; i < 2; i++){
            ll x, y; cin >> x >> y;
            int cnt = -1;

            if (x == 1 && y == 1 || x == n && y == m || 
                x == n && y == 1 || x == 1 && y == m)
                cnt = 2;
            else if (x == 1 || x == n || y == 1 || y == m)
                cnt = 3;
            else
                cnt = 4;
            res = min(cnt, res);
        }

        cout << res << endl;
    }
    return 0;
}