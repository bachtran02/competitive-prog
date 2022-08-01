#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int res, maxx = -1;

    for (int i = 1; i <= n; i++){
        int k = i, count = 0;
        while (k % 2 == 0){
            k /= 2;
            count++;
        }
        
        if (count >= maxx){
            maxx = count;
            res = i;
        }
    }
    cout << res << endl;
}