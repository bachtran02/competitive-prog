#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int res = 0, n; cin >> n;
    ll prev, curr; cin >> prev;
    int state = 0;  

    for (int i = 1; i < n; i++){
        cin >> curr;
        if (curr > prev){
            if (state == 0){
                state = 1;
                res++;
            }
            if (state == 2)
                state = 0;
        }
        if (curr < prev){
            if (state == 0){
                state = 2;
                res++;
            }
            if (state == 1)
                state = 0;
        }
        prev = curr;
    }

    if (state == 0)
        res++;
    
    cout << res << endl;
    
    return 0;
}