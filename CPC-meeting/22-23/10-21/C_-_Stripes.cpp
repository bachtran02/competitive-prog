#include <bits/stdc++.h>
using namespace std; 

int main(){
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        bool done = false;
        for (int i = 0; i < 8; i++){
            int cnt = 0;
            for (int j = 0; j < 8; j++){
                char temp; cin >> temp;
                if (temp == 'R') cnt++;
            }
            if (!done && cnt == 8){
                cout << 'R' << endl;
                done = true;
            }
        }
        if (!done)
            cout << 'B' << endl;
    }
}