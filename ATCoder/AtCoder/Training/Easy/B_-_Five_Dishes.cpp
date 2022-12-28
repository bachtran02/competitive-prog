#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int min_ldigit = 10, res = 0;

    for (int i = 0; i < 5; i++){
        int a; cin >> a;
        if (a % 10 != 0){
            min_ldigit = min(min_ldigit, a % 10);
            res += ((a / 10) + 1) * 10;
        }
        else
            res += a;
    }

    cout << res - (10 - min_ldigit) << endl;
    return 0;
}