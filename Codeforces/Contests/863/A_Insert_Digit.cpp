#include <bits/stdc++.h>
using namespace std;

void solve(string str, int n, char d){
    bool done = false;
    for (int i = 0; i < n; i++){
        if (!done && d > str[i]){
            done = true;
            cout << d; 
        }
        cout << str[i];
    }
    if (!done)
        cout << d;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test; cin >> test;
    while(test--){
        int n;
        char d;
        string str;
        cin >> n >> d >> str;
        solve(str, n , d);
        cout << endl;
    }
}