#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        ll x, y; cin >> y >> x;
        if (y >= x)
            if (y % 2)
                cout << (--y * y) + x << endl;
            else
                cout << (y * y) - x + 1 << endl;
        else
            if (x % 2)
                cout << (x * x) - y + 1 << endl;
            else
                cout << (--x * x) + y << endl;
    }
    return 0;
}