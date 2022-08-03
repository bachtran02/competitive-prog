#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr, order1, order2;

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
        order1.push_back(temp);
    }

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        order2.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int i = 0, a = -1, b = -1;
    bool done1 = false, done2 = false;
    do{
        if (arr == order1){
            a = i;
            done1 = true;
        }
        if (arr == order2){
            b = i;
            done2 = true;
        }
        i++;
        if (done1 && done2)
            break;
    } while(next_permutation(arr.begin(), arr.end()));

    cout << abs(a - b) << endl;
}