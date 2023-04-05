#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int res = 0, n; cin >> n;
    vector<int> arr(n - 1);

    for (auto &i : arr)
        cin >> i;
        
    res += arr[n - 2];
    for (int i = n - 2; i >= 1; i--){
        res += min(arr[i], arr[i - 1]);
    }
    res += arr[0];

    cout << res << endl;
    return 0;
}