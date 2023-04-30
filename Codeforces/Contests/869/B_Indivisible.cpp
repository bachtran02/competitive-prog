#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    if (n % 2){
        if (n == 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
        return;
    }

    for (int i = 1; i <= n; i++){
        if (i % 2)
            cout << n - i << " ";
        else
            cout << n - i + 2 << " ";
    }

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}