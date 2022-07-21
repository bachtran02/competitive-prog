#include <bits/stdc++.h>
using namespace std;

int main(){
    // solve with brute force
    long int res = 10000000;
    int n; cin >> n;
    vector<int> arr(n);

    for (auto &i : arr){
        cin >> i;
    }
    for (int i = 0; i <= 100; i++){
        long int count = 0;
        for (int j = 0; j < n; j++){
            count += (arr[j] - i) * (arr[j] - i);
        }
        res = min(res, count);
    }
    cout << res << endl;
}