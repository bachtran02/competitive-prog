#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> arr1(n), arr2(n);

    for (int i = 0; i < n; i++){
        ll temp; cin >> temp;
        arr1[i] = temp;
        arr2[i] = temp;
    }

    sort(arr2.begin(), arr2.end());
    ll m1 = arr2[n/2 - 1];
    ll m2 = arr2[n/2];

    for (int i = 0; i < n; i++){
        if (arr1[i] <= m1)
            cout << m2 << endl;
        else
            cout << m1 << endl;
    }
    return 0;
}