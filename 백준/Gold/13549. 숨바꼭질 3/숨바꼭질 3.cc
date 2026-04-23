#include <bits/stdc++.h>

using namespace std;

struct Case {
    int pos;
    int t;
};

short visited[100001] = {0};

void insertCase(queue<Case> &Q, Case &org, int n, bool b) {
    if(n >= 0 && n <= 100000) {
        if(visited[n] == 0 || org.t < visited[n]) {
            Q.push(Case({n, org.t+b}));
            visited[n] = org.t+b;
        }
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    
    int N, K;
    
    cin >> N >> K;

    queue<Case> Q;
    Q.push(Case({N, 1}));

    while(!Q.empty()) {
        Case f = Q.front();
        Q.pop();

        if(f.pos == K) {
            cout << f.t - 1;
            break;
        }

        insertCase(Q, f, f.pos * 2, 0);
        insertCase(Q, f, f.pos-1, 1);
        insertCase(Q, f, f.pos+1, 1);
        
    }

    return 0;
}