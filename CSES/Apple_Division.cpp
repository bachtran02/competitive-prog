#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
vector<int> arr;
 
ll backtracking(int i, ll a, ll b){
    if (i == n){
        return abs(a - b);
    }
 
    return min(backtracking(i + 1, a + arr[i], b), backtracking(i + 1, a, b + arr[i]));
}
 
int main(){
    cin >> n;
 
    for (int temp, i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
 
    cout << backtracking(1, arr[0], 0) << endl;
    return 0;
}
