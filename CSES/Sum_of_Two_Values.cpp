#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll x; cin >> x;
    vector<ll> arr(n + 1);
    map<ll, vector<int>> m;

    for (int i = 1; i <= n; i++){
        ll temp; cin >> temp;
        arr[i] = temp;
        m[temp].push_back(i);
    }

    for (int i = 1; i <= n; i++){
        ll t = x - arr[i];
        if (t + t == x){
            if (m[t].size() >= 2){
                cout << m[t][0] << " " << m[t][1] << endl;
                return 0;
            }
            continue;
        }
        
        if (m[t].size()){
            cout << i << " " << m[t][0] << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}