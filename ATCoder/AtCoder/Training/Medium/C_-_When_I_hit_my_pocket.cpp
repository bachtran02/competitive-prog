#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll k, a, b, res = -1;
    cin >> k >> a >> b;
    
    cout << max(k + 1, (k - a + 1) % 2 + a + (b - a) * ((k - a + 1) / 2)) << endl;

    return 0;
}