#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    map<ll, int> mp;

    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        mp[x]++;
    }

    int m; cin >> m;
    bool done = false;
    for (int i = 0; i < m; i++){
        ll x; cin >> x;
        if (!mp[x] || done){
            done = true;
            continue;
        }
        mp[x]--;
    }

    if (done)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}