#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll l, r; cin >> l >> r;

    if (l % 2019 >= r % 2019)
        cout << 0 << endl;
    else
        cout << ((l % 2019) * ((l + 1) % 2019)) % 2019 << endl; 

    return 0;
}