#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> arr;
    map<ll, ll> m;
    set<ll> s;

    for (auto &i : arr)
        cin >> i;

    for (int i = 0; i < n; i++){
        ll temp; cin >> temp;
        if (!s.count(temp))
            arr.push_back(temp);
        s.insert(temp);
        m[temp]++;
    }

    sort(arr.begin(), arr.end(), greater<ll>());

    ll first_pair = -1;
    for (ll i : arr){
        if (m[i] >= 2){
            if (first_pair != -1){
                cout << first_pair * i << endl;
                return 0;
            }
            if (m[i] >= 4){
                cout << i * i << endl;
                return 0;
            }
            else 
                first_pair = i;
        }
    }

    cout << 0 << endl;
    return 0;
}