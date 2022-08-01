#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k, res;
    cin >> n >> k;

    if (n % k == 0){
        res = 0;
    }
    else{
        long long int i = n / k;
        res = min(min(abs(n - i * k), abs(n - (i + 1) * k)), abs(n - (i - 1) * k)); 
    }
    cout << res << endl;
}