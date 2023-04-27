#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, k; cin >> n >> k;
    int dmg = k, i = 0, mdmg = 0;
    vector<int> h(n), p(n);
    vector<pair<int, int>> hp(n);
    map<int, int> m;

    for (auto &i : h)
        cin >> i;
    for (auto &i : p){
        cin >> i;
        m[i]++;
    }

    for (int i = 0; i < n; i++){
        hp[i].first = h[i];
        hp[i].second = p[i];
    }

    sort(hp.begin(), hp.end());

    while(true){
        if (m.empty()){
            cout << "YES" << endl;
            return;
        }
        if (k < mdmg){
            cout << "NO" << endl;
            return;
        }

        while (dmg >= hp[i].first){
            m[hp[i].second]--;
            if (m[hp[i].second] == 0){
                m.erase(hp[i].second);
                if (m.empty()){
                    cout << "YES" << endl;
                    return;
                }
            }
            i++;
        }
        mdmg += m.begin()->first;
        dmg += k - mdmg;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--)
        solve();
}