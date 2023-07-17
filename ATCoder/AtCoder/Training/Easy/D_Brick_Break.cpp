#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int cur = 1;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x == cur)
            cur++;
    }

    if (cur == 1)
        cout << -1 << endl;
    else
        cout << n - cur + 1 << endl;
}