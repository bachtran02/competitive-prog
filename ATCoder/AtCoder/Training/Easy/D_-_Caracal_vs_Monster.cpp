#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll h; cin >> h;
    ll res = 0;

    int i = 0; 
    while (h){
        res += pow(2, i++);
        h /= 2;
    }

    cout << res << endl;
}