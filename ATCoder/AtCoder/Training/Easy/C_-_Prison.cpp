#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    int min_b = -1, max_b = n + 5;

    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        min_b = max(min_b, a);
        max_b = min(max_b, b);
    } 

    cout << max(0, max_b - min_b + 1) << endl;
    return 0;
}
