#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int minn = 35; // max is 1e9 < pow(2, 32)
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        int count = 0;
        while (temp % 2 == 0){
            count++;
            temp /= 2;
        }
        minn = min(count, minn);
    }
    cout << minn << endl;
}