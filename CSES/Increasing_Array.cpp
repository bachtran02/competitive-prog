#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// check boundaries
// greedy problem
int main(){
    int n;
    ll res = 0;
    vector<ll> arr;

    cin >> n;

    for (int temp, i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);

        if (i == 0) continue;
        if (arr[i - 1] > arr[i]){
            res += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << res << endl;    
    return 0;
}