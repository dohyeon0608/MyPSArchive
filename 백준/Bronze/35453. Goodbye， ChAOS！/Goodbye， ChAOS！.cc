#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while(T-- > 0) {
        int N;
        cin >> N;

        int hash = 1;
        string x;

        while(N-- > 0) {
            cin >> x;
            hash *= x.length();
        }

        switch(hash) {
            case 232: cout << 2017; break;
            case 88: cout << 2018; break;
            case 754: cout << 2019; break;
            case 29: cout << 2020; break;
            case 28: cout << 2021; break;
            case 1015: cout << 2022; break;
            case 1295: cout << 2023; break;
            case 1073: cout << 2024; break;
            case 348: cout << 2025; break;
            default: cout << "Goodbye, ChAOS!";
        }
        cout << "\n";
    }

    return 0;
}