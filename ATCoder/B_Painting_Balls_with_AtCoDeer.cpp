#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k; cin >> n >> k;

    int res = k;
    for (int i = 0; i < n - 1; i++){
        res *= (k - 1);
    }
    cout << res << endl;
}