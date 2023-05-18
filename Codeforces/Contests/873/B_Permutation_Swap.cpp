#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        res = __gcd(res, abs(x - i));
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