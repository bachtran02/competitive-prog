#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mapp;
    int maxx = -1, num = 0;

    for (int a, b, i = 0; i < n; i++){
        cin >> a >> b;
        mapp.insert({a, 1});
        mapp.insert({b, -1});
    }

    for (auto i : mapp){
        num += i.second;
        maxx = max(num, maxx);
    }

    cout << maxx << endl;
    return 0;
}
