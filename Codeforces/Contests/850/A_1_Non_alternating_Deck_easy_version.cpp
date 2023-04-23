#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        ll a = 0, b = 0;

        int i = 1;
        while(n > 0){
            if (i % 4 == 1 || i % 4 == 0)
                a += min(n, i);
            else
                b += min(n, i);
            n -= i++;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}