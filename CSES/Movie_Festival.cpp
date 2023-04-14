#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int, int>> arr(n);

    for (auto &i : arr) 
        cin >> i.second >> i.first;

    sort(arr.begin(), arr.end());

    int curr = 1, cnt = 0;
    for (auto i : arr){
        if (curr <= i.second){
            curr = i.first;
            cnt++;
        }   
    }

    cout << cnt << endl;
    return 0;
}