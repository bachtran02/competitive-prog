#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll x, y; cin >> x >> y;
    ll t = y / x;
    int res = 1;
    while (t/2){
        t /= 2;
        res++;
    }
    cout << res << endl;
}