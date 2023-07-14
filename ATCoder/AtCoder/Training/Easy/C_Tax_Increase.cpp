#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int a, b; cin >> a >> b;
    for (int i = 1; i <= 10000; i++){
        if (floor(i * 0.08) == a && floor(i * 0.1) == b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}