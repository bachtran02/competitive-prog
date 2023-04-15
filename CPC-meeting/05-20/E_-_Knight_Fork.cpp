#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx[8] = { 1,  2,  2,  1, -1, -2, -2, -1};
    int dy[8] = { 2,  1, -1, -2, -2, -1,  1,  2};

    x2 -= x1;
    y2 -= y1;
    x1 = 0;
    y1 = 0;

    for (int i = 0; i < 8; i++){
        int temp_x1 = x1 - dx[i];
        int temp_y1 = y1 - dy[i];
        int temp_x2 = x2 - dx[i];
        int temp_y2 = y2 - dy[i];

        for (int j = 0; j < 8; j++){
            if (temp_x1 == dx[j] & temp_y1 == dy[j]){
                for (int k = 0; k < 8; k++){
                    if (temp_x2 == dx[k] && temp_y2 == dy[k]){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}