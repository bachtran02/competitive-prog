#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    set<int> w_row, w_col;
    int h, w; cin >> h >> w;
    char m[105][105];

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> m[i][j];
        }
    }

    // check for white row
    for (int i = 0; i < h; i++){
        bool white_r = true;
        for (int j = 0; j < w; j++){
            if (m[i][j] != '.'){
                white_r = false;
                break;
            }
        }
        if (white_r) w_row.insert(i); 
    }

    // check for white column
    for (int i = 0; i < w; i++){
        bool white_c = true;
        for (int j = 0; j < h; j++){
            if (m[j][i] != '.'){
                white_c = false;
                break;
            }
        }
        if (white_c) w_col.insert(i); 
    }

    for (int i = 0; i < h; i++){
        if (w_row.count(i))
            continue;
        for (int j = 0; j < w; j++){
            if (w_col.count(j))
                cout << "";
            else
                cout << m[i][j];
        }
        cout << endl;
    }

    return 0;
}