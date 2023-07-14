#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll a, b, k; cin >> a >> b >> k;

    for (int i = a; i <= b; i++){
        if (b - a + 1 <= k){
            cout << i << endl;
            continue;
        }
        if (i < a + k || i > b - k)
            cout << i << endl;
    }
}