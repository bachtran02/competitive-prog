#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<ll> arr(n);
    ll maxx = -1, sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i < m){
            sum1 += arr[i];
            sum2 += arr[i] * (i + 1);
        }
    }

    maxx = sum2;
    if (n == m){
        cout << maxx << endl;
        return 0;
    }

    for (int i = 0; i < n - m; i++){
        sum2 = sum2 - sum1 + m * arr[i + m];
        maxx = max(sum2, maxx);
        sum1 = sum1 - arr[i] + arr[i + m];
    }
    cout << maxx << endl;
    return 0;
}