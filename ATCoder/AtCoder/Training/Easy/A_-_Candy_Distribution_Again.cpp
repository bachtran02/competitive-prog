#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, count = 0;
    cin >> n >> x;

    vector<int> arr(n);
    for (int &i : arr){
        cin >> i;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++){
        if (x < 0)
            break;
        x -= arr[i];
        count++;
    }

    if (x != 0)
        count--;

    cout << count << endl;
}