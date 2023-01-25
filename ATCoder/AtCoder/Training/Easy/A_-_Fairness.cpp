#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxx = 1e18;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    if (abs(a - b) > maxx)
        cout << "Unfair" << endl;
    else if (k % 2)
        cout <<  b - a << endl;
    else
        cout << a - b << endl;
    return 0;
}