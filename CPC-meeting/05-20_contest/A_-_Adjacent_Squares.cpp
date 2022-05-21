#include <bits/stdc++.h>
using namespace std;


int h, w;

bool valid(int x, int y){
    if (x <= 0 || y <= 0 || x > w || y > h){
        return false;
    }

    return true;
}


int main(){
    int r, c;
    int count = 0;
    cin >> h >> w >> r >> c;

    int dx[4] = { 0, 0, -1, 1};
    int dy[4] = {-1, 1,  0, 0};

    for (int i = 0; i < 4; i++){
        if (valid(c + dx[i], r + dy[i]))
            count++;
    }

    cout << count << endl;
    return 0;
}