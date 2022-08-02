#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_f, num_m, num_dis;
    cin >> num_f >> num_m >> num_dis;

    vector<int> farr(num_f);
    vector<int> marr(num_m);

    int min_f = 1e5 + 5;
    for (int &i : farr){
        cin >> i;
        min_f = min(min_f, i);
    }

    int min_m = 1e5 + 5;
    for (int &i : marr){
        cin >> i;
        min_m = min(min_m, i);
    }

    int res = min_f + min_m;
    for (int i = 0; i < num_dis; i++){
        int f, m, d; 
        cin >> f >> m >> d;

        res = min(res, farr[f - 1] + marr[m - 1] - d);
    }

    cout << res << endl;
}