#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    ll y; cin >> y;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n - i; j++){
            if (i * 10000 + j * 5000 + (n - i - j) * 1000 == y){
                cout << i << " " << j << " " << n - i - j << endl;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}