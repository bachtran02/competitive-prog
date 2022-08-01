#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<double> arr(n);

    for (double &i: arr){
        cin >> i;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++){
        arr[i + 1] = (arr[i] + arr[i + 1]) / 2.0;
    }

    cout << arr[arr.size() - 1];
}