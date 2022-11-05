#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        string str; cin >> str;
        priority_queue<ll> q;
        ll curr = 0;

        int len = str.length();
        for (int i = 0; i < len/2; i++){
            if (str[i] != 'R'){
                q.push(len - 1 - 2 * i);
                curr += i;
            }
            else
                curr += len - 1 - i;                
        }

        for (int i = len/2; i < len; i++){
            if (str[i] != 'L'){
                q.push(2 * i - len + 1);
                curr += len - 1 - i;
            }
            else
                curr += i;
        }
        
        for (int i = 0; i < n; i++){
            if (!q.empty()){
                curr += q.top();
                cout << curr << " ";
                q.pop();
            }
            else
                cout << curr << " ";
                
        }
        cout << endl;
    }
    return 0;
}