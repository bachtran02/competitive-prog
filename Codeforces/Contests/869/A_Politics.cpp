#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n, k; cin >> n >> k;
    vector<string> arr(n);
    vector<bool> l(n, true);

    for (auto &i : arr)
        cin >> i;

    if (n == 1){
        cout << 1 << endl;
        return;
    }
        
    int res = n;
    for (int i = 0; i < k; i++){
        for (int j = 1; j < n; j++){
            if (l[j] && arr[j][i] != arr[0][i]){
                l[j] = false;
                res--;
            }
        }
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