#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test; cin >> test;
    while (test--){
        ll n; cin >> n;
        vector<ll> arr(4);
        for (auto &i : arr)
            cin >> i;

        for (auto &i : arr){
            i -= n/2;
            if (i <= 0)
                i--;
        }

        cout << abs(max(abs(arr[0]), abs(arr[1])) 
            - max(abs(arr[2]), abs(arr[3]))) << endl;
    }

    return 0;
}