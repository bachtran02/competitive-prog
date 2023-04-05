#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

// https://www.geeksforgeeks.org/program-calculate-value-ncr/
ull nCr(int n, int r)
{    
    double sum = 1;
    for (int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return (ull)sum;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, p; cin >> n >> p;
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        odd += temp % 2;
    }
    even = n - odd;
    
    ull res = 0;
    for (int i = p; i <= odd; i+= 2){
        for (int j = 0; j <= even; j++){
            res += nCr(odd, i) * nCr(even, j);
        }
    }

    cout << res << endl;
    return 0;
}