#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n;
    vector<ll> arr(n);
    vector<pll> a; 

    for (auto &i : arr)
        cin >> i;

    int j = 0, k = n - 1;
    for (int i = n - 1; i >= 0; i--){
        if (i % 2 != n % 2)
            a.push_back({j++, i});
        else
            a.push_back({k--, i});
    }

    sort(a.begin(), a.end());

    for (auto i : a){
        cout << arr[i.second] << " ";
    }
    cout << endl;
    return 0;
}