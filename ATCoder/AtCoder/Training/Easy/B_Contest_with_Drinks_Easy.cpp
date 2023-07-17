#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a1(n);
    int res = 0;

    for (auto &i : a1){
        cin >> i;
        res += i;
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++){
        int p, x; cin >> p >> x;
        cout << res - a1[p - 1] + x << endl;
    }
}