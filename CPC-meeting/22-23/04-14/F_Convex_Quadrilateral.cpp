#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

double findAngle(pi v1, pi v2){
    return 0;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<pi> arr(4), v(4);
    for (auto &i : arr)
        cin >> i.first >> i.second;

    for (int i = 0; i < 3; i++){
        v[i].first = arr[i + 1].first - arr[i].first;
        v[i].second = arr[i + 1].second - arr[i].second;
    }
    v[3].first =arr[0].first - arr[3].first;
    v[3].second = arr[0].second - arr[3].second;

    for (auto i : v)
        cout << i.first << " " << i.second << endl; 

    return 0;
}