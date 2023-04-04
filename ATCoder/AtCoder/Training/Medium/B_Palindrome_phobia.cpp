#include <bits/stdc++.h>
using namespace std;

bool solve(string str){

    if (str.length() <= 2)
        return (str.length() == 1 || str[0] != str[1]);

    vector<int> arr(3);
    for (auto i : str){
        arr[0] += (i == 'a');
        arr[1] += (i == 'b');
        arr[2] += (i == 'c');
    }

    sort(arr.begin(), arr.end(), greater<int>());

    if (!((arr[0] == arr[1] && arr[1] == arr[2]) || 
        (arr[0] == arr[1] + 1 && arr[1] == arr[2]) || 
        (arr[0] == arr[1] && arr[1] == arr[2] + 1)) 
    )
        return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    if (solve(str))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}