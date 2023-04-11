#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;

        for (int i = 0; i < n/2; i++){
            cout << 2 * n - 2 * i << " " << (i + 1) * 2 << " ";
        }
        cout << endl;
        
        cout << 1 << " ";
        for (int i = 1; i < n/2; i++){
            cout << 2 * n - 2 * i - 1 << " " << (i + 1) * 2 - 1<< " ";
        }
        cout << 2*n - 1;
        cout << endl;
    }
    return 0;
}