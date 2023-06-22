#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<int> arr(3);
    for (auto &i : arr)
        cin >> i;
    
    sort(arr.begin(), arr.end());

    int x = arr[1] - arr[0];
    int y = arr[2] - arr[1];
    int k = 0;

    if (!(x % 2 == y % 2 && x % 2 == 0)){
        k = 1;
        if (x % 2 == y % 2 && x % 2 == 1){
            x--;
            y++;
        }
        else if (x % 2 == 0)
            y--;
        else
            x++;
    }
    cout << k + y/2 + (x + y)/2 << endl;
}