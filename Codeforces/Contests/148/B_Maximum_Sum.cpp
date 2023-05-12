#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
 
void solve(){
    int n, k; cin >> n >> k;
    vector<ll> arr(n);
    ll cur = 0, res = -1;
 
    for (auto &i : arr)
        cin >> i;
        
    sort(arr.begin(), arr.end());
 
    for (int i = 0; i < n - k; i++)
        cur += arr[i];

    int l = 0, r = n - k;
    res = cur;
    while (r < n){
        cur = cur - arr[l] - arr[l + 1] + arr[r];
        l += 2;
        r += 1;
        res = max(res, cur);
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