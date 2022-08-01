#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, n;
    int first, prev, temp, summ = 0, maxx = -1;
    cin >> p >> n;

    for (int i = 0; i < n; i++){
        cin >> temp;
        if (i){
            summ += temp - prev;
            maxx = max(maxx, temp - prev);
        }
        else{
            first = temp;
        }
        prev = temp;
    }

    // distance between first and last houses (clockwise direction)
    summ += first + (p - temp); 
    maxx = max(maxx, first + (p - temp));
    cout << summ - maxx << endl;
}