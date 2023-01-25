#include <bits/stdc++.h>
using namespace std;

bool isPal(string s){
    for (int i = 0; i < s.size()/2; i++){
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int cnt = 0;

    for (int i = a; i <= b; i++){
        if (isPal(to_string(i)))
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}