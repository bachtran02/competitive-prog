#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, t; cin >> n >> t;
    vector<int> arr(n);
    bool st = false;

    for (auto &i : arr){
        cin >> i;
        if (!st && i == t)
            st = true;
    }
    
    if (!st)
        t = arr[0];

    int maxx = -1;
    int res = -1;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (arr[i] == t && x > maxx){
            maxx = x;
            res = i + 1;
        }
    }

    cout << res << endl; 
}