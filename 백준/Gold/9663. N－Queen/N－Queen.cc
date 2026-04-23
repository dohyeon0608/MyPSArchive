#include <iostream>

using namespace std;

int N;

// 1차원으로 수정 (퀸 규칙을 잘 이해하지 못한 것이 함정.)
// plane[행] = 저장된 퀸 열
int plane[15];

// 디버그용
void print_plane() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << ((plane[i] == j)? 1 : 0) << " ";
        }
        cout << "\n";
    }
}

// 해당 위치에 새 퀸을 놓을 수 있는가
bool check(int x, int y) {
    // 열 검색
    for(int i = 0; i < N; i++) {
        if(plane[i] == -1) break;
        if(plane[i] == y) return false;
    }
    
    // 대각선
    // i는 행번호
    for(int i = 0; i < N; i++) {
        if(plane[i] == -1) break;
        int dx = x - i;
        int dy = y - plane[i];
        if(dx == dy || dx == -dy) {
            return false;
        }
    }
    return true;
}

int result = 0;

// t = 시작 위치
void f(int x) {
    if(x == N) {
        result++;
    } else {
        for(int y = 0; y < N; y++) {
            if(!check(x, y)) continue; // 못하겠으면 넘어가기
            plane[x] = y; // step행에 i 삽입
            f(x + 1);
            plane[x] = -1; // 취소
        }
    }
}

int main() {
    cin >> N;
    
    // 초기화
    for(int i = 0; i < N; i++) {
        plane[i] = -1;
    }

    f(0);

    cout << result << "\n";

    return 0;
}