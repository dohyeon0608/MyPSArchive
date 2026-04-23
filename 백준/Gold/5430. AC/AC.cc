#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    string func;
    int n;
    deque<int> arr;
    string arr_str;
    bool is_reversed;
    bool is_error;

    for(int i = 0; i < N; i++) {
        is_reversed = false;
        is_error = false;
        arr.clear();
        cin >> func >> n >> arr_str;

        // 파싱
        arr_str = arr_str.substr(1, arr_str.size() - 2);
        istringstream iss(arr_str);
        string buffer;
        while(getline(iss, buffer, ',')) {
            arr.push_back(stoi(buffer));
        }

        // 명령어 해석
        for(auto command : func) {
            if(command == 'R') {
                is_reversed = !is_reversed;
            } else {
                if(arr.empty()) { // 배열이 비어있는데 지울 경우
                    cout << "error\n";
                    is_error = true;
                    break;
                }
                if(is_reversed) arr.pop_back();
                else arr.pop_front();
            }
        }

        if(is_error) continue;

        // 결과 출력
        cout << "[";
        if(is_reversed) {
            for(auto iter = arr.rbegin(); iter != arr.rend(); iter++) {
                cout << *iter;
                if(iter + 1 != arr.rend()) {
                    cout << ",";
                }
            }
        } else {
            for(auto iter = arr.begin(); iter != arr.end(); iter++) {
                cout << *iter;
                if(iter + 1 != arr.end()) {
                    cout << ",";
                }
            }
        }
        cout << "]\n";
    }

    return 0;
}