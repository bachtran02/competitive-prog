#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n, m; cin >> n >> m;

    if (n == 1 || m == 1){
        if (n == 1 && m == 1)
            cout << 1 << endl;
        else
            cout << n * m - 2 << endl;
    }
    else{
        cout << (n - 2) * (m - 2) << endl;
    }
    return 0;
}