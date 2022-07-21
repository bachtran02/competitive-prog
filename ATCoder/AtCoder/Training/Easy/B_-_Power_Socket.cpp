#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, res;
    cin >> a >> b;

    // edge case: if we only use 1 socket then 
    // no extension needed
    if (b == 1){
        res = 0;
    }
    else if (a > b)
        res = 1;
    else {
        res = (b - a) / (a - 1) + 1;
        if ((b - a) % (a - 1))
        res++;
    }
    
    cout << res << endl;
}