#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<int> s;

    int i = 2;
    s.insert(n);

    while(true){
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

        if (s.count(n)){
            cout << i << endl;
            break;
        }
        s.insert(n);
        i++;
    }
}