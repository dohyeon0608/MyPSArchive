#include <iostream>
#include <vector>

using namespace std;

struct Human {
    int weight;
    int height;
};

int main() {
    int N;
    cin >> N;
    
    vector<Human> humans;
    int rank[51] = {0};
    
    int weight, height;
    for(int i = 0; i < N; i++) { // 입력
        cin >> weight >> height;
        humans.push_back(Human{weight, height});
    }
    
    // 비교
    // 최악일 경우(N = 50) 50C2 = 1225
    for(int i = 0; i < N; i++) {
        Human a = humans[i];
        for(int j = 0; j <= i; j++) {
            Human t = humans[j];
            if(t.weight > a.weight && t.height > a.height) {
                rank[i]++;
            } else if(t.weight < a.weight && t.height < a.height) {
                rank[j]++;
            }
        }
    }
    
    for(int i = 0; i < N; i++) {
        cout << rank[i] + 1 << " ";
    }

    return 0;
}