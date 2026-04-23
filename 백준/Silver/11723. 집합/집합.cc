#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool S[21] = {false};
    
    int M;
    cin >> M;
    
    string command;
    int operand;
    
    for(int i = 0; i < M; i++) {
        cin >> command;
        
        if(command == "add") {
            cin >> operand;
            S[operand] = 1;
        }
        if(command == "remove") {
            cin >> operand;
            S[operand] = 0;
        }
        if(command == "check") {
            cin >> operand;
            cout << S[operand] << "\n";
        }
        if(command == "toggle") {
            cin >> operand;
            S[operand] = !S[operand];
        }
        if(command == "all") {
            for(int i = 1; i <= 20; i++) {
                S[i] = 1;
            }
        }
        if(command == "empty") {
            for(int i = 1; i <= 20; i++) {
                S[i] = 0;
            }
        }
    }

    return 0;
}