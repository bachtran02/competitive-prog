#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        ll a, b; cin >> a >> b;
        if ( __gcd(a, b) == 1){
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
            if (a == 2 && b == 2)  // edge case
                cout << 2 << " " << 1 << endl;
            else
                cout << a - 1 << " " << 1 << endl;   
        }
        cout << a << " " << b << endl;
    }
    return 0;
}