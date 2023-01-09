#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k; cin >> n >> k;
    map<int, int> m;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        m[x]++;
    }

    // no need to delete anything
    if (k >= m.size()){
        cout << 0 << endl;
        return 0;
    }

    vector<int> arr;
    for (auto i : m){
        arr.push_back(i.second);
    }

    sort(arr.begin(), arr.end());

    int res = 0;
    for (int i = 0; i < arr.size() - k; i++){
        res += arr[i];
    }

    cout << res << endl;
    return 0;
}