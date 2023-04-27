#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        vector<ll> arr(n);

        for (auto &i : arr)
            cin >> i;
            
        sort(arr.begin(), arr.end());
        cout << max(arr[0] * arr[1], arr[n - 1] * arr[n - 2]) << endl;
    }
    return 0;
}