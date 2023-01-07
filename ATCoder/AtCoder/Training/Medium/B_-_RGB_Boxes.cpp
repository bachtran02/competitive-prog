#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int r, g, b, n, cnt = 0;
    cin >> r >> g >> b >> n;

    for (int i = 0; i <= 3000; i++){
        for (int j = 0; j <= 3000; j++){
            int t = n - i * r - j * g;
            if (t >= 0 && t % b == 0)
                cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}