#include <bits/stdc++.h>
using namespace std;

int findLength(int x1, int y1, int x2, int y2){
    return (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int length = findLength(x1, y1, x2, y2);

    cout << length << endl;
}