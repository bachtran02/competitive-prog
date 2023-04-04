#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    ll n, m; cin >> n >> m;

    if (2*n == m)
        cout << n << endl;
    else if (2*n < m)
        cout << n + (m - 2*n)/4 << endl;
    else
        cout << m/2 << endl;
}
