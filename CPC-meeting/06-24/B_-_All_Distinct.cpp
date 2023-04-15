#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int main(){
    int test; cin >> test;

    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        set<int> s;
        int count_extra = 0;

        for (int temp, i = 0; i < n; i++){
            cin >> temp;
            if (s.count(temp))
                count_extra++;
            else
                s.insert(temp);
        }

        if (count_extra % 2 == 0)
            cout << s.size();
        else 
            cout << s.size() - 1;
        cout << endl;
    }
}