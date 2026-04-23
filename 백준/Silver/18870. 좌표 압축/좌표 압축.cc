#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    map<int, int> result;
    vector<int> points;
    vector<int> points_set;
    
    int x;
    
    // 입력
    for(int i = 0; i < N; i++) {
        cin >> x;
        points.push_back(x);
        if(result[x] == 0) {
            points_set.push_back(x);
            result[x] = -1;
        }
    }
    
    // 정렬
    sort(points_set.begin(), points_set.end());
    
    // 결과 정리
    for(int i = 0; i < points_set.size(); i++) {
        result[points_set[i]] = i;
    }
    
    // 출력
    for(int i = 0; i < N; i++) {
        cout << result[points[i]] << " ";
    }

    return 0;
}