#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<ll> arr(n);

    for (auto &i : arr)
        cin >> i;

    int res = 0;
    bool inc = false, dec = false;

    for (int i = 1; i < n; i++){
        if (!inc && arr[i - 1] < arr[i]){
            res++;
            inc = true;
            dec = false;
        }
        if (!dec && arr[i - 1] > arr[i]){
            res++;
            dec = true;
            inc = false;
        }
    }
    cout << res + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}