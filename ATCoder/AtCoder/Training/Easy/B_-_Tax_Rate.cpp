#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    // n is rounded down to the nearest integer
    int a = floor(n / 1.08);
    int b = ceil(n / 1.08);

    if (floor(a * 1.08) == n)
        cout << a << endl;
    else if (floor(b * 1.08) == n)
        cout << b << endl;
    else
        cout << ":(" << endl;
}