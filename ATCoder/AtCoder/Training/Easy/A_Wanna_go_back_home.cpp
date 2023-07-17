#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    set<char> s;
    
    for (char c : str)
        s.insert(c);
    if (
        (s.count('N') != s.count('S') &&
        s.count('N') * s.count('S') == 0) || 
        (s.count('W') != s.count('E') &&
        s.count('W') * s.count('E') == 0)
    )
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}