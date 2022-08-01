#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for (int& i: arr){
        cin >> i;
    }

    sort(arr.begin(), arr.end());

    int res = arr[arr.size()/2] - arr[arr.size()/2 - 1];
    cout << res << endl;
}