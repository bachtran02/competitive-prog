#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<pair<ll, ll>> arr(n);

    for (auto &i : arr)
        cin >> i.first >> i.second;
    
    sort(arr.begin(), arr.end());

    ll res = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++){
        if (cnt + arr[i].second >= m){
            res += (m - cnt) * arr[i].first;
            cout << res << endl;
            return 0;
        }
        res += arr[i].second * arr[i].first;
        cnt += arr[i].second;
    }
}