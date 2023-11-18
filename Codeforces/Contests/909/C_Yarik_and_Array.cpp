#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);

    for (auto &i : arr)
        cin >> i;

    int res = arr[0], global = arr[0], local = arr[0];
    for (int i = 1; i < n; i++){
        if (abs(arr[i - 1] % 2) == abs(arr[i] % 2)){
            res = max(res, global);
            local = arr[i];
            global = arr[i];
        }
        else{
            local = max(global + arr[i], arr[i]);
            global = local;
        }
        res = max(res, global);
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