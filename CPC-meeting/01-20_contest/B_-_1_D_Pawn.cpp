#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k, q; cin >> n >> k >> q;
    vector<int> arr(k);

    for (auto &i : arr)
        cin >> i;
    for (int i = 0; i < q; i++){
        int x; cin >> x;
        if (arr[--x] != n && (x == k - 1 || (arr[x] + 1) != arr[x + 1]))
            arr[x]++;
    }

    for (auto i : arr)
        cout << i << " ";
    return 0;
}