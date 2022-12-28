#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    string str; cin >> str;
    vector<ll> arr;
    ll res = 0;

    for (ll i = 0; i < str.length(); i++){
        if (str[i] == 'W')
            arr.push_back(i);
    }

    for (ll i = 0; i < arr.size(); i++){
        res += arr[i] - i;
    }

    cout << res << endl;
    return 0;
}