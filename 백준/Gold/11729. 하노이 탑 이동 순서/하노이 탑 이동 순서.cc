#include <iostream>
#include <vector>

using namespace std;

struct step {
    int p;
    int q;
};

vector<step> steps;

// p에 있던 원판 n개를 q로 옮기는 함수
void f(int p, int q, int n) {
    if(n == 1) {
        steps.push_back(step{p, q});
    } else {
        int r = 6-(p+q);
        f(p, r, n-1);
        steps.push_back(step{p, q});
        f(r, q, n-1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    f(1, 3, N);
    
    cout << steps.size() << "\n";
    for(auto step : steps) {
        cout << step.p << " " << step.q << "\n";
    }

    return 0;
}