#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        set<int> s;
        bool res = true;
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            if (res && s.count(temp)){
                res = false;
            }
            s.insert(temp);

        }

        if (res)
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
}