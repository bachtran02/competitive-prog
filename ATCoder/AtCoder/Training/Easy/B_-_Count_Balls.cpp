#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, blue, red; 
    cin >> n >> blue >> red;

    ll stack, num_stack, r;
    stack = blue + red;
    num_stack = n / stack;
    r = n % stack;
    
    cout << blue * num_stack + min(blue, r) << endl;
}