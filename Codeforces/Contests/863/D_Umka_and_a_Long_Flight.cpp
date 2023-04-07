#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<ll> fib(45);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= 44; i++){
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        ll x, y; cin >> x >> y;

        
    }

    return 0;
}