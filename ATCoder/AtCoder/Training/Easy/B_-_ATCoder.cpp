#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[4] = {'A', 'C', 'G', 'T'};
    string str; cin >> str;
    int count = 0, maxx = -1;

    for (char i : str){
        bool found = false;
        for (char j : arr){
            if (i == j){
                found = true;
                break;
            }  
        }
        if (found)
            count++;
        else {
            maxx = max(maxx, count);
            count = 0;
        }
    }

    // make sure to compare maxx and count after the loop ends
    cout << max(maxx, count) << endl;
}