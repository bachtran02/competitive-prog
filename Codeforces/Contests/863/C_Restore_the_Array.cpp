#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector<ll> arr(n - 1);
        for (auto &i : arr)
            cin >> i;

        cout << arr[0] << " ";
        for (int i = 0; i < n - 2; i++){
            cout << min(arr[i], arr[i + 1]) << " ";

        }
        cout << arr[n - 2] << endl;
    }
    return 0;
}