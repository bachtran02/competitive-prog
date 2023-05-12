#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    int res = 0;

    for (auto &i : arr)
        cin >> i;

    for (int i = 0; i < n/2; i++){
        if (arr[i] == arr[n-1-i])
            continue;
            
        res = __gcd(res, max(arr[i], arr[n-1-i]) - min(arr[i], arr[n-1-i]));
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