#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// prefix sum problem

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        vector<ll> arr;
        arr.push_back(0); // fill index = 0

        ll count = 0, res = 0;
        for (int i = 1; i <= n; i++){
           ll temp; cin >> temp;
           if (temp < i){
            count++;
            if (temp > 1)
              res += arr[temp - 1];
           }
           arr.push_back(count);
        }
        cout << res << endl;
    }
    return 0;
}