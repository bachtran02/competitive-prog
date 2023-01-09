#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n, a, b;
    cin >> n >> a >> b;

    // edge cases
    if (n == 1 && a != b || a > b){
        cout << 0 << endl;
        return 0;
    }

    cout << (b - a) * (n - 2) + 1 << endl;
    return 0;
}