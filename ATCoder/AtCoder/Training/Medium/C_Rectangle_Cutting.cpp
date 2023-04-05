#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    bool mul = false;    
    ll w, h, x, y;
    cin >> w >> h >> x >> y;

    double maxx = (w * h) / 2.0;

    // if point is at center
    if (y == h/2.0 && x == w/2.0)
        mul = true;

    cout << fixed << setprecision(9) << maxx << " " << mul << endl;
    
    return 0;
}