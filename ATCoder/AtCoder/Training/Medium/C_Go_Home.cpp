#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll i = 0, x; cin >> x;
    while (x > 2 * i){
        x -= i++;
    }

    int res = (x == i)? i : i + 1;
    cout << res << endl;
    return 0;
}