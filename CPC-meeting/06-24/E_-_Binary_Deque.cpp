#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;

    for (int z = 1; z <= test; z++){
        int n, s; cin >> n >> s;
        int count = 0;
        vector<int> arr;
        int prev = -1;

        for (int prev, temp, i = 0; i < n; i++){
            cin >> temp;
            
            if (temp == 1){
                if (!count)
                    arr.push_back(i = prev + 1);
                count++;
                prev = i;
            }
        }

        if (count < s){
            cout << -1 << endl;
            continue;;
        }
        else if (count == s){
            cout << 0 << endl;
            continue;
        }

        count = 1;
        int i = 0, j = arr.size() - 1;
        while (count != s){
            if (arr[i] < arr[j])
                

            

        }
    }

}