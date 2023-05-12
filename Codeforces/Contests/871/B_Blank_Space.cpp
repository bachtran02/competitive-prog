#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    int res = 0, cnt = 0;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x != 0){
            res = max(res, cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    cout << max(res, cnt) << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}