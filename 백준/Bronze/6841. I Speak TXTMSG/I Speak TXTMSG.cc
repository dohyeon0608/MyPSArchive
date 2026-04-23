#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> trs = {
        {"CU", "see you"},
        {":-)", "I\u2019m happy"},
        {":-(", "I\u2019m unhappy"},
        {";-)", "wink"},
        {":-P", "stick out my tongue"},
        {"(~.~)", "sleepy"},
        {"TA", "totally awesome"},
        {"CCC", "Canadian Computing Competition"},
        {"CUZ", "because"},
        {"TY", "thank-you"},
        {"YW", "you\u2019re welcome"},
        {"TTYL", "talk to you later"},
    };
    
    string x;
    while(cin >> x) {
        if(trs[x] != "") {
            cout << trs[x] << "\n";
        } else {
            cout << x << "\n";
        }
    }


    return 0;
}