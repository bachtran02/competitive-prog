#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;

        if (n % 2){
            if (n == 1)
                cout << 1 << endl;
            else
                cout << -1 << endl;
            continue;
        }

        cout << n << " ";
        for (int i = n - 1; i >= 1; i--){
            if (i % 2)
                cout << i << " ";
            else
                cout << n - i << " ";
        }
        cout << endl;
    }

    return 0;
}