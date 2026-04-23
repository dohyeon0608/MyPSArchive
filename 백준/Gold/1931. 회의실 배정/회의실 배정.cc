#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct meeting {
    int start;
    int end;
};

bool compare(meeting a, meeting b) {
    if(a.end != b.end) {
        return a.end < b.end;
    } else {
        return a.start < b.start;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<meeting> meetings;
    
    int x, y;
    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        meetings.push_back(meeting{x, y});
    }
    
    sort(meetings.begin(), meetings.end(), compare);
    
    int rooms = 0;
    int end = 0;
    
    for(auto m : meetings) {
        if(m.start >= end) {
            end = m.end;
            rooms++;
        }
    }
    
    cout << rooms << "\n";
    
    return 0;
}