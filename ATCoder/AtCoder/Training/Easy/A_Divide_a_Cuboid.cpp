#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<ll> arr(3);
    ll m = 1;

    for (auto &i : arr){
        cin >> i;
        m *= i;
    }
        
    if (m % 2 == 0)
        cout << 0 << endl;
    else{
        sort(arr.begin(), arr.end());
        cout << arr[0] * arr[1] << endl;
    }
}