#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int summ = 0, maxx = -1, minn = 1e5 + 5;
    vector<int> arr(n);

    for (auto &i : arr){
        cin >> i;
        summ += i;
    }
    
    sort(arr.begin(), arr.end());

    for (auto i : arr){
        

    }

    return 0;
}