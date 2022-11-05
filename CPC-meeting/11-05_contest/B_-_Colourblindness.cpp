#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        vector<string> grid(2);
        bool res = true;
        for (auto &i : grid)
            cin >> i;

        // green & blue
        for (int i = 0; i < n; i++){
            if (grid[0][i] == 'R' && grid[1][i] != 'R' 
            || grid[0][i] != 'R' && grid[1][i] == 'R'){
                res = false;
                break;
            }
        }

        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}