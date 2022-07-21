#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, pass = 0, o_count = 0;
    cin >> n >> a >> b;
    string str; cin >> str;

    for (auto i : str){
        if (i == 'c' || pass >= a + b){
            cout << "No" << endl;
            continue;
        }

        if (i == 'a'){
            cout << "Yes" << endl;
            pass++;
        }
        else {
            if (o_count < b){
                cout << "Yes" << endl;
                pass++;
                o_count++;
            }
            else
                cout << "No" << endl;
        }
    }
}