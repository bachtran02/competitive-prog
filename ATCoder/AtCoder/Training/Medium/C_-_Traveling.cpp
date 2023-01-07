#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int last[3] = {0};
    bool valid = true;
    for (int i = 0; i < n; i++){
        int cur[3];
        for (auto &j : cur)
            cin >> j;

        if (!valid)
            continue;
        
        int d_dif = abs(cur[1] - last[1]) + abs(cur[2] - last[2]);
        int t_dif = cur[0] - last[0];

        if (d_dif % 2 != t_dif % 2 || t_dif < d_dif)
            valid = false;

        // update last with cur value
        for (int j = 0; j < 3; j++)
            last[j] = cur[j];
    }

    if (valid)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}