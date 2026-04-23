#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    cin.ignore();

    string str;
    bool result;
    int length;
    
    for(int i = 0; i < n; i++) {
        getline(cin, str);
        result = true;
        length = str.size();
        
        for(int j = 0; j < length/2 + 1; j++) {
            char first = str[j];
            char last = str[length-j-1];
            if(first >= 'A' && first <= 'Z') first += 32;
            if(last >= 'A' && last <= 'Z') last += 32;

            if(first != last) {
                result = false;
                break;
            }
        }
        cout << ((result)? "Yes" : "No") << "\n";
    }
    return 0;
}