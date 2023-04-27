#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int TC; cin >> TC;
    while (TC--){
        ll n; cin >> n;
        cout << n * n + (n + 1) * 2 << endl;
    }

    return 0;
}