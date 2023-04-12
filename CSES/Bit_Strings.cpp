#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ull res = 1;

    for (int i = 1; i <= n; i++)
        res = res % (ull)(1e9 + 7) * 2;
    
    cout << res % (ull)(1e9 + 7) << endl;
    return 0;
}