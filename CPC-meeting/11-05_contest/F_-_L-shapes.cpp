#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

bool visited[55][55] = {false};
char grid[55][55] = {' '};
int r, c;

int dx[8] = {-1, -1, -1,  0,  0,  1, 1, 1};
int dy[8] = {-1,  0,  1, -1,  1, -1, 0, 1};

bool checkBound(int x, int y){
    return (y >= 0 && y < r && x >= 0 && x < c);
}

void dfs(int y, int x, queue<pi> &q){
    visited[y][x] = true;
    if (grid[y][x] != '*')
        return;
    q.push({y, x});
    for (int i = 0; i < 8; i++){
        int new_x = x + dx[i], new_y = y + dy[i];
        if (checkBound(new_x, new_y) && !visited[new_y][new_x]){
            dfs(new_y, new_x, q);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        cin >> r >> c;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> grid[i][j];
            }
        }

        queue<pi> q;
        bool res = true;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (!visited[i][j]){
                    dfs(i, j, q);
                }

                // cout << q.size() << endl;
                if (!q.empty() && q.size() != 3){
                    res = false;
                    break;
                }

                int min_x = 55, min_y = 55;
                int max_x = -1, max_y = -1;
                while (!q.empty()){
                    // cout << q.front().first << " " << q.front().second;
                    pi t = q.front();
                    min_x = min(min_x, t.second);
                    max_x = max(max_x, t.second);
                    min_y = min(min_y, t.first);
                    max_y = max(max_y, t.first);
                    q.pop();
                }
                if (max_x - min_x == 2 || max_y - min_y == 2)
                    res = false;
            }
            if (res == false)
                break;
        }

        if (res)    
            cout << "YES";
        else
            cout << "NO";
        cout << endl;

        // reset visited
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                visited[i][j] = false;
            }
        }
    }
    return 0;
}