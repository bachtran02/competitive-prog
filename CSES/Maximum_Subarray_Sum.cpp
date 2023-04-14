#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> arr(n);
    
    for (auto &i : arr)
        cin >> i;

    ll res = 0;
    for (int i = 0 ; i < n; i++){
        if (res + arr[i] < 0){
            res = 0;
            continue;
        }

        
            
    }

    return 0;
}