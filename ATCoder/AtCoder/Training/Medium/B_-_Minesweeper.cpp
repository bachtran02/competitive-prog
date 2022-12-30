#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int h, w; cin >> h >> w;
    int arr[50][50] = {0};
    int dx[8] = {-1, -1, -1,  0,  0,  1,  1,  1};
    int dy[8] = {-1,  0,  1, -1,  1, -1,  0,  1};

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            char c; cin >> c;
            if (c != '#')
                continue;
            arr[i][j] = -1;
            for (int k = 0; k < 8; k++){
                int x = j + dx[k];
                int y = i + dy[k];

                if (!(x < 0 || x >= w || y < 0 || y >= h || arr[y][x] == -1))
                    arr[y][x]++;
            }
        }
    }  

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if (arr[i][j] == -1)
                cout << '#';
            else
                cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}