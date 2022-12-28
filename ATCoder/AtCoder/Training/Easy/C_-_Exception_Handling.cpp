#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> arr1(n), arr2;

    for (auto &i : arr1)
        cin >> i;

    arr2 = arr1;
    sort(arr2.begin(), arr2.end());
    int max1 = arr2[n - 1], max2 = arr2[n - 2];

    for (int i = 0; i < n; i++){
        if (arr1[i] == max1)
            cout << max2 << endl;
        else 
            cout << max1 << endl;
    }
    
    return 0;
}