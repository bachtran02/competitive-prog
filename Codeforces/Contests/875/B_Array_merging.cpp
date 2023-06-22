#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    map<int, int> m1, m2;

    int prev; cin >> prev;
    int cnt = 1;

    for (int i = 1; i < n; i++){
        int x; cin >> x;
        if (x == prev)
            cnt++;
        else{
            m1[prev] = max(m1[prev], cnt);
            cnt = 1;
        }
        prev = x;
    }
    m1[prev] = max(m1[prev], cnt);

    cin >> prev;
    cnt = 1;

    for (int i = 1; i < n; i++){
        int x; cin >> x;
        if (x == prev)
            cnt++;
        else{
            m2[prev] = max(m2[prev], cnt);
            cnt = 1;
        }
        prev = x;
    }
    m2[prev] = max(m2[prev], cnt);

    int res = 1;
    for (auto i : m1)
        res = max(res, m1[i.first] + m2[i.first]);
    for (auto i : m2)
        res = max(res, m1[i.first] + m2[i.first]);
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}