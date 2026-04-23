#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merge(vector<int>& A, vector<string>& B, int p, int q, int r) {
    int i = p, j = q + 1, t = 0;
    vector<int> tmp(r - p + 1);
    vector<string> tmpb(r - p + 1);
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {
            tmp[t] = A[i];
            tmpb[t] = B[i];
            t++; i++;
        }
        else {
            tmp[t] = A[j];
            tmpb[t] = B[j];
            t++; j++;
        }
    }
    while (i <= q) { tmp[t] = A[i]; tmpb[t] = B[i]; t++; i++; }
    while (j <= r) { tmp[t] = A[j]; tmpb[t] = B[j]; t++; j++; }
    i = p; t = 0;
    while (i <= r) {
        A[i] = tmp[t];
        B[i] = tmpb[t];
        i++; t++;
    }
}

void merge_sort(vector<int>& A, vector<string>& B, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, B, p, q);
        merge_sort(A, B, q + 1, r);
        merge(A, B, p, q, r);
    }
}

int main() {
    int N;
    cin >> N;
    int age;
    string name;
    vector<int> age_f(N);
    vector<string> name_f(N);
    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        age_f[i] = age;
        name_f[i] = name;
    }
    merge_sort(age_f, name_f, 0, N - 1);
    for (int i = 0; i < N; i++) {
        cout << age_f[i] << " " << name_f[i] << "\n";
    }
}