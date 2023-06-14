#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int x, k; cin >> x >> k;
    
    if (x % k){
        cout << 1 << endl << x << endl;
        return;
    }

    cout << 2 << endl;
    cout << x - 1 << " " << 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}