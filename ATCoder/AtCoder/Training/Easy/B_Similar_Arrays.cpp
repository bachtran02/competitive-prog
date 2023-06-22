#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll res = 1, ex = 1;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x % 2 == 0)
            ex *= 2;
        res *= 3;
    }
    cout << res - ex << endl;
}