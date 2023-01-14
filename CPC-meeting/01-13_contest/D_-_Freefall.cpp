#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll a, b; cin >> a >> b;
    double n = pow(cbrt(a / ((2.0 * b))), 2.0) - 1.0;
    ll n1 = ceil(n), n2 = floor(n);
    
    if (n <= 0)
        cout << a << ".0000000000" << endl;
    else{
        double res1 = a / sqrt(1.0 + n1) + n1 * b,
               res2 = a / sqrt(1.0 + n2) + n2 * b;
        cout << fixed << setprecision(10);
        if (res1 < res2)
            cout << res1 << endl;
        else
            cout << res2 << endl;
    }
    return 0;
}