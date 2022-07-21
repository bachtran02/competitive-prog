#include <bits/stdc++.h>
using namespace std;

const int SIZE = 8;

int main(){
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        bool done = false;
        char board[SIZE][SIZE];
        int dx[4] = {-1,  -1,  1,  1};
        int dy[4] = {-1,   1, -1,  1};

        for (int i = 0; i < SIZE; i++){
            for (int j = 0; j < SIZE; j++){
                cin >> board[i][j];
            }
        }

        for (int i = 1; i < SIZE - 1; i++){
            if (done)
                break;
            for (int j = 1; j < SIZE - 1; j++){
                if (done)
                    break;
                if (board[i][j] == '#')
                    for (int x = 0; x < 4; x++){
                        if (board[i + dy[x]][j + dx[x]] != '#')
                            break;
                        if (x == 3){
                            cout << i + 1 << " " << j + 1 << endl;
                            done = true;
                            break;
                        }
                    }
            }
        }
    }
}