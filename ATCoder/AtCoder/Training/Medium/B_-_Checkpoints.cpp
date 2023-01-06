#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    vector<pair<ll, ll>> st(n), cp(m);

    for (auto &i : st)
        cin >> i.first >> i.second;
    for (auto &i : cp)
        cin >> i.first >> i.second;

    for (auto i : st){
        int min_cp = -1;
        ll min_dis = LLONG_MAX;
        
        for (int j = 0; j < m; j++){
            ll dis = abs(i.first - cp[j].first) + abs(i.second - cp[j].second);
            if (min_dis > dis){
                min_dis = dis;
                min_cp = j;
            }
        }
        cout << min_cp + 1 << endl;
    }

    return 0;
}