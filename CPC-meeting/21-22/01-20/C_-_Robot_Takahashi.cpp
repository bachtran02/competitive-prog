#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<bool, ll> bl;

bool compare(bl x1, bl x2){
    if (x1.second == x2.second)
        return x1.first > x2.first;
    return x1.second < x2.second;
}

// int lis(vector<bl>&arr){
//     int n = arr.size();
//     vector<int> lis, dp;

//     dp.assign(n, 1);
//     for (int j, i = 0; i < n; i++){
//         j = upper_bound(lis.begin(), lis.end(), arr[i].first) - lis.begin();
//         dp[i] = j + 1;
//         if (j == lis.size())
//             lis.push_back(arr[i].first);
//         else
//             lis[j] = arr[i].first;
//     }
//     return lis.size();
// }

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int cnt_a = 0, n; cin >> n;
    string str; cin >> str;
    vector<bl> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i].second;
        arr[i].first = (str[i] == '1');
        cnt_a += arr[i].first;
    }

    sort(arr.begin(), arr.end(), compare);

    int res = cnt_a;
    for (auto i : arr){
        if (i.first)
            cnt_a--;
        else
            cnt_a++;
        res = max(res, cnt_a);
    }

    cout << res << endl;
    return 0;
}