#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    int k = ((n*n + n)/2 - 1) % n;
  
    if (k)
        cout << n - k << " ";
    else
        cout << n * 2 << " ";
    for (int i = 2; i <= n; i++)
        cout << i << " ";
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