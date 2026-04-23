#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void kantore(string& s, int start, int end, int step) {
    if(step != 0) {
        int length = end - start + 1;
        int midS = start + length / 3;
        int midE =  end - length / 3;
        for(int i = midS; i < midE; i++) {
            s[i] = ' ';
        }
        kantore(s, start, midS, step - 1);
        kantore(s,midE, end, step - 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N;
    while(cin >> N) {
        int length = pow(3, N);
        string s = "";
        for(int i = 0; i < length; i++) {
            s += "-";
        }
        kantore(s, 0, length, N);
        cout << s << "\n";
    }
    
    return 0;
}