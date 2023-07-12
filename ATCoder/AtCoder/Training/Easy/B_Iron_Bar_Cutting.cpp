#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll cur_sum = 0;
    vector<int> arr(n);

    for (auto &i : arr){
        cin >> i;
        cur_sum += i;
    }

    ll count = 0;
    ll res = INT32_MAX;

    for (int i = 0; i < n - 1; i++){
        count += arr[i];
        cur_sum -= arr[i];
        res = min(abs(count - cur_sum), res);
    }
    cout << res << endl;
}