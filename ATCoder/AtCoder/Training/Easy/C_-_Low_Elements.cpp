#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int minn = INT32_MAX, res = 0;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (a < minn){
            minn = a;
            res++;
        }
    }

    cout << res << endl;
    return 0;
}