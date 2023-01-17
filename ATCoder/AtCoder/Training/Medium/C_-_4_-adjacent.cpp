#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int cnt_2 = 0, cnt_4 = 0;

    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        if (x % 4 == 0)
            cnt_4++;
        else if (x % 2 == 0)
            cnt_2++;
    }

    if (cnt_4 >= n / 2 || cnt_4 * 2 + cnt_2 == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}