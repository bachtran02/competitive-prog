#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> cl;

bool compare(cl x1, cl x2){
    if (x1.second == x2.second)
        return x1.first > x2.first;
    return x1.second < x2.second;
}

int lis(vector<cl>&arr){
    int n = arr.size();
    vector<int> lis, dp;

    dp.assign(n, 1);
    for (int j, i = 0; i < n; i++){
        j = upper_bound(lis.begin(), lis.end(), arr[i].first) - lis.begin();
        dp[i] = j + 1;
        if (j == lis.size())
            lis.push_back(arr[i].first);
        else
            lis[j] = arr[i].first;
    }
    return lis.size();
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    string str; cin >> str;
    vector<cl> arr;

    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        int j = (str[i] == '0') ? 0 : 1;
        arr.push_back({j, x});
    }

    sort(arr.begin(), arr.end(), compare);
    cout << lis(arr) << endl;
    
    return 0;
}