#include <bits/stdc++.h>
using namespace std;

struct time {
    int hour;
    int minute;
};

bool checkPalindrome(struct time t){
    string h = to_string(t.hour);
    string m = to_string(t.minute);

    if (t.hour < 10)
        h = '0' + h;
    if (t.minute < 10)
        m = '0' + m;

    // cout << h << " " << m << endl;
    return (h[0] == m[1] && h[1] == m[0]);
}

struct time nextInterval(int interval, struct time s){
    struct time temp;
    temp.hour = s.hour;
    temp.minute = s.minute;

    temp.hour += interval / 60;
    temp.minute += interval % 60;

    if (temp.minute >= 60){
        temp.hour++;
        temp.minute -= 60;
    }

    if (temp.hour >= 24){
        temp.hour -= 24;
    }
    
    return temp;
}

int main(){
    int test; cin >> test;

    for (int z = 1; z <= test; z++){
        int count = 0;
        string str; cin >> str;
        int interval; cin >> interval;
        struct time time;
        set<pair<int, int>> s;

        time.hour = stoi(str.substr(0, 2));
        time.minute = stoi(str.substr(3, 2));

        while (!s.count({time.hour, time.minute})){
            s.insert({time.hour, time.minute});

            if (checkPalindrome(time)){
                // cout << time.hour << " " << time.minute << endl;
                count++;
            }

            time = nextInterval(interval, time);
        }

        cout << count << endl;
    }
}