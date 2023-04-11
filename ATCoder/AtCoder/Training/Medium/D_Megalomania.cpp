#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pl;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<pl> arr(n);

    for (auto &i : arr)
        cin >> i.second >> i.first;

    sort(arr.begin(), arr.end());

    ll cur = 0;
    for (auto i : arr){
        cur += i.second;
        if (cur > i.first){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}