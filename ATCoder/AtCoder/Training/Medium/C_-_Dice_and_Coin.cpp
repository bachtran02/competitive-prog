#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k; cin >> n >> k;
    double res = 0;
    for (int i = 1; i <= n; i++){
        int x = i;
        double p = 1.0/n;
        while (x <= k - 1){
            x *= 2;
            p /= 2;
        }
        res += p;
    }   

    cout << fixed << setprecision(12) << res << endl;
    return 0;
}