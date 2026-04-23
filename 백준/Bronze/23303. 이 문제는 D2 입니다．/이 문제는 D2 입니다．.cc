#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    getline(cin, str);

    char last_chr = str[0];

    bool result = false;
    
    for(int i = 1; i < str.size(); i++) {
        if(str[i] == '2') {
            if(last_chr == 'D' || last_chr == 'd') {
                result = true;
                break;
            }
        }
        last_chr = str[i];
    }

    cout << ((result)? "D2" : "unrated") << "\n";

    return 0;
}