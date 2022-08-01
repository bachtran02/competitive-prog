#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;

    bool found = false;
    int index = -1;

    // arr[i] can't be 0, k and x
    vector<int>arr(m + 1);
    for (int i = 1; i <= m; i++){
        int temp; cin >> temp;

        if (!found && temp > x){
            index = i - 1;
            found = true;
        }
    }

    cout << min(index, m - index) << endl;
}