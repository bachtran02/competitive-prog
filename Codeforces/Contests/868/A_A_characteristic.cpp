#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n, k; cin >> n >> k;
    
    for (int i = 1; i <= n; i++){
        if (i * (i - 1) + (n - i) * ((n - i) - 1) == 2 * k){
            cout << "YES" << endl;
            for (int k = 0; k < i; k++){
                cout << -1 << " ";
            }
            for  (int k = 0; k < n - i; k++){
                cout << 1 << " ";
            }
            cout << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}