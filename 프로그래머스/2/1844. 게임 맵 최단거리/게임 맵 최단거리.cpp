#include <bits/stdc++.h>
using namespace std;

struct node {
    int r;
    int c;
    int d; // distance
};

bool isValid(node n, int &R, int &C) {
    return (n.r >= 0 && n.r < R) && (n.c >= 0 && n.c < C);
}

void visit(node n, vector<vector<bool>> &visited) {
    visited[n.r][n.c] = true;
}

bool isVisited(node n, vector<vector<bool>> &visited) {
    return visited[n.r][n.c];
}

// 생각해보니 maps를 그냥 visited로 할 수 있었네?
// 하지만 이미 visited로 구현했으므로 일단 제출
int solution(vector<vector<int> > maps)
{
    queue<node> Q;
    vector<vector<bool>> visited(maps.size(), vector<bool>(maps[0].size(), false));
    
    int R = maps.size(); // 세로
    int C = maps[0].size(); // 가로
    
    // 장애물 설치
    for(int r = 0; r < R; r++) {
        for(int c = 0; c < C; c++) {
            if(maps[r][c] == 0) visited[r][c] = true;
        }
    }
    
    Q.push({0, 0, 1});
    visit({0, 0, 1}, visited);
    
    while(!Q.empty()) {
        node f = Q.front();
        Q.pop();
        
        if(f.r == R-1 && f.c == C-1) {
            return f.d;
        }
        
        vector<node> hubos = {
            {f.r+1, f.c, f.d+1},
            {f.r, f.c+1, f.d+1},
            {f.r-1, f.c, f.d+1},
            {f.r, f.c-1, f.d+1}
        };
        
        for(node h : hubos) {
            if(!isValid(h, R, C)) continue;
            if(isVisited(h, visited)) continue;
            visit(h, visited);
            Q.push(h);
        }
    }
    
    return -1;
}