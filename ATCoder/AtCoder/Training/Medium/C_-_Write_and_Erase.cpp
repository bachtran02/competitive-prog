#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    unordered_set<ll> s;

    int n; cin >> n;
    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        if (s.count(x))
            s.erase(x);
        else
            s.insert(x);
    }

    cout << s.size() << endl;
    return 0;
}