#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;
    vector<ull> arr(87);

    arr[0] = 2; 
    arr[1] = 1;
    for (int i = 2; i < 87; i++){
        arr[i] = arr[i - 2] + arr[i - 1];
    }

    cout << arr[n] << endl;
    return 0;
}