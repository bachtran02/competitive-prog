#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        vector<int>a1(n), a2(n);

        for (auto &i : a1)
            cin >> i;

        for (auto &i : a2)
            cin >> i;

        int s = -1, e = -1;
        for (int i = 0; i < n; i++){
            if (a1[i] != a2[i]){
                s = i;
                e = i;
                while (s > 0 && a2[s-1] <= a2[s])
                    s--;
                while (e < n - 1 && a2[e] <= a2[e + 1])
                    e++;
                break;
            }
        }

        if (s == -1)
            cout << 1 << " " << n << endl;
        else
            cout << s + 1 << " " << e + 1 << endl;
    }

    return 0;
}