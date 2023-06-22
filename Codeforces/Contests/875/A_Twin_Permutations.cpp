#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);

    int sum = n + 1;
    for (auto &i : arr){
        cin >> i;
        cout << sum - i << " ";
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