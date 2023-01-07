#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int summ = 0, minn = INT16_MAX;
    vector<int> arr(n);

    for (auto &i : arr){
        cin >> i;
        summ += i;
        if (i < minn && i % 10)
            minn = i; 
    }

    if (summ % 10 == 0)
        if (minn == INT16_MAX)
            cout << 0 << endl;
        else
            cout << summ - minn << endl;
    else
        cout << summ << endl;

    return 0;
}