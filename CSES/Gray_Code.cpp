#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> arr;
    
    int l = 1;
    for (int i = 1; i <= n; i++)
        l *= 2;

    int k = 4;
    for (int i = 0; i < n; i++){
        vector<int> temp;
        for (int j = 0; j < l; j++){
            int h = j % k;
            if (h >= k/4 && h < k/4 + k/2)
                    temp.push_back(1);
            else
                temp.push_back(0);
        }
        k *= 2;
        arr.push_back(temp);
    }
    for (int j = 0; j < l; j++){
        for (int i = n - 1; i >= 0; i--){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}