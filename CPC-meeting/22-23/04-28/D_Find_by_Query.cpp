#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int l = 0, r = n - 1;

    while (true){
        
        cout << "? " << (l + r)/2 + 1 << "\n";
        char c; cin >> c;

        if (c == '0')
            l += n/2;
        else
            r -= n/2;

        if (l == r){
            cout << "! " << l << "\n";
            return 0;
        }
        n = r - l + 1;
    }
}