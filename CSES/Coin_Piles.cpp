#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    ll a, b;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> a >> b;
        if ((a + b) % 3 != 0){
            cout << "NO" << endl;
            continue;
        }

        ll c = (a + b) / 3;
        if (a > c * 2 || a < c)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

    return 0;
}