#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n, m; cin >> n >> m;
    int k = n * m - 1, res = 0;
    vector<int> arr(n * m);
    
    for (auto &i : arr)
        cin >> i;
    
    sort(arr.begin(), arr.end());
    res = (arr[k] - arr[0]) * (max(m, n) - 1) * min(m, n) + (arr[k - 1] - arr[0]) * (min(n, m) - 1);
    

    sort(arr.begin(), arr.end(), greater<int>());
    res = max(res, (arr[0] - arr[k]) * (max(m, n) - 1) * min(m, n) + (arr[0] - arr[k - 1]) * (min(n, m) - 1));
    
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