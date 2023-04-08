#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> fib(46);

bool solve(int n, ll x, ll y){

    x = min(x, fib[n] - x + 1);
    y = max(y, fib[n + 1] - y + 1);

    if (n == 0){
        if (x == 1 && y == 1)
            return true;
        else 
            return false;
    }
    return solve(n - 1, y - fib[n], x);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= 45; i++){
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        ll x, y; cin >> x >> y;

        if (solve(n, x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}