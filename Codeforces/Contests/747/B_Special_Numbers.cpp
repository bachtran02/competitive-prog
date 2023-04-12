#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        ull n, k; cin >> n >> k;
        ull res = 0;
        ull t = 1;
        vector<int> arr;
        int i = 0;
        while (k){
            res += t * (k % 2);
            t = (t % (ull)(1e9 + 7) * n) % (ull)(1e9 + 7);
            k/=2;
        }
        cout << res % (ull)(1e9 + 7) << endl;
    }
    return 0;
}