#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n < 2)
        return false;

    // 2 and 3 doesn't satisfy initial condition of this loop -> skip and return true
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    while (!isPrime(n)){
        n++;
    }
    cout << n << endl;
}