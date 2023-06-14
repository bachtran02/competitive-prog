#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n), c(n);
    map<int, stack<int>> m;

    for (int i = 0; i < n; i++){
        int t; cin >> t;
        a[i] = t;
        c[i] = t;
    }
    for (auto &i : b)
        cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++){
        m[a[i]].push(b[i]);
    }

    for (auto i : c){
        cout << m[i].top() << " ";
        m[i].pop();
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}