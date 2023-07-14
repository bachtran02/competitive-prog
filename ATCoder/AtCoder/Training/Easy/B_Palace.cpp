#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, t, a; cin >> n >> t >> a;

    int res = 0;
    double min = 100000;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (fabs(a - (t - x * 0.006)) < min){
            res = i + 1;
            min = fabs(a - (t - x * 0.006));
        }
    }
    cout << res << endl;
}