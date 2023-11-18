#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);

    for (auto &i : arr)
        cin >> i;

    ll res = 0;
    for (int i = 1; i * 2 <= n; i++){
        if (n % i)
            continue;
        
        int cur = 0;
        ll cnt = 0;
        ll minn = INT64_MAX, maxx = INT64_MIN;
        while (cur < n){
            cnt += arr[cur];
            if ((cur + 1) % i == 0){
                minn = min(minn, cnt);
                maxx = max(maxx, cnt);
                cnt = 0;
            }
            cur++;
        }
        res = max(res, maxx - minn);
    }
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