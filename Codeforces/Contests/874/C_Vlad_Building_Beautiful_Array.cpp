#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<ll> a(n);

    for (auto &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    if (a[0] % 2 == 1){
        cout << "YES" << endl;
        return;
    }

    for (auto i : a)
        if (i % 2){
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}