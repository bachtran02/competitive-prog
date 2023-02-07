#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> arr(m);

    for (auto &i : arr){
        int x; cin >> x;
        i = x + 1e5;
    }

    if (n >= m){
        cout << 0 << endl;
        return 0;
    }

    sort(arr.begin(), arr.end());

    int summ = 0;
    vector<int> dif_arr;
    for (int i = 0; i < arr.size() - 1; i++){
        int dif = arr[i + 1] - arr[i];
        summ += dif;
        dif_arr.push_back(dif);
    }

    sort(dif_arr.begin(), dif_arr.end(), greater<>());

    int i = 0;
    while (--n){
        summ -= dif_arr[i++]; 
    }

    cout << summ << endl;
    return 0;
}