#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        vector<int> arr(n);

        for (auto &i : arr)
            cin >> i;
        
        bool done = false;
        for (int x = 0; x <= 256; x++){
            int r = 0;
            for (auto i : arr)
                r = (r^(i^x));

            if (r == 0){
                cout << x << endl;
                done = true;
                break;
            }
        }
        if (!done)
            cout << -1 << endl;
    }
    return 0;
}