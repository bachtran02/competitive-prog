#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);

    for (auto &i : arr)
        cin >> i;
    
    if (n == 1){
        cout << arr[0] << endl;
        return;
    }
    if (n == 2){
        cout << arr[1] << " " << arr[0] << endl;
        return;
    }
        
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}