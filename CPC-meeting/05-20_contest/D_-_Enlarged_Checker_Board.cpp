#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < a; j++){
            for (int k = 0; k < n; k++){
                if (i % 2 == 0){
                    for (int l = 0; l < b; l++)
                        if (k % 2 == 0)
                            cout << ".";
                        else
                            cout << "#";
                }
                else {
                    for (int l = 0; l < b; l++)
                        if (k % 2 == 0)
                            cout << "#";
                        else
                            cout << ".";
                }
            }
            cout << endl;
        }
    }
}