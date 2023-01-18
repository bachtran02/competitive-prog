#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k; cin >> n >> k;
    
    for (int i = 0; i < n; i++){
        int x; cin >> x;
    }

    cout << 1 + ceil((n - k)/(k - 1.0)) << endl;
    return 0;
}