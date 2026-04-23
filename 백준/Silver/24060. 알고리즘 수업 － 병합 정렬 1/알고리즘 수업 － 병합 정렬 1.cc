#include <iostream>
#include <vector>

using namespace std;

int N, K;
int progress = 0;
vector<int> A;
int x;

void merge(vector<int>& A, int p, int q, int r) {
    int i = p, j = q+1, t = 0;
    vector<int> tmp;
    while(i <= q && j <= r) {
        if(A[i] <= A[j]) { tmp.push_back(A[i]); t++; i++; }
        else { tmp.push_back(A[j]); t++; j++; }
    }
    
    while(i <= q) { tmp.push_back(A[i]); t++; i++; }
    while(j <= r) { tmp.push_back(A[j]); t++; j++; }
    i = p; t = 0;
    while(i <= r) { // 저장
        A[i] = tmp[t];
        if(++progress == K) cout << A[i] << "\n";
        i++; t++;
    }
}

void merge_sort(vector<int>& A, int p, int r) {
    if(p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> K;
    
    for(int i = 0; i < N; i++) {
        cin >> x;
        A.push_back(x);
    }
    
    merge_sort(A, 0, N-1);
    
    if(progress < K) cout << -1 << "\n";
    
    return 0;
}