#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;

    for (int z = 1; z <= test; z++){
        int a; cin >> a;
        int count = 0;

        for (int temp, i = 0; i < 3; i++){
            cin >> temp;
            if (temp > a)
                count++;
        }

    cout << count << endl;
    }
}