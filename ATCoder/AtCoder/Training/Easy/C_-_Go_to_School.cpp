#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
    
int main(){
    int n; cin >> n;
    vector<pi> arr;

    for (int i = 1; i <= n; i++){
        int temp; cin >> temp;
        arr.push_back({temp, i});
    }

    sort(arr.begin(), arr.end());

    for (auto i : arr){
        cout << i.second << " ";
    }
}

// to use minheap: https://www.geeksforgeeks.org/implement-min-heap-using-stl/