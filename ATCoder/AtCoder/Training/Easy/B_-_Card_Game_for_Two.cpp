#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a = 0, b = 0;

    vector<int> arr(n);
    for (int &i : arr){
        cin >> i;
    }

    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < arr.size(); i++){
        if (i % 2 == 0)
            a += arr[i];
        else    
            b += arr[i];
    }

    cout << a - b << endl;
}
    