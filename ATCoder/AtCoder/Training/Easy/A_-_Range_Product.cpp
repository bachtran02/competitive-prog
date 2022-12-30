#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll a, b; cin >> a >> b;
    if (b < 0){
        if ((abs(b - a) + 1) % 2)
            cout << "Negative" << endl;
        else
            cout << "Positive" << endl;   
    }
    else if (a > 0)
        cout << "Positive" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}