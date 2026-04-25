#include <bits/stdc++.h>
#define ll long long

using namespace std;

// 메모: 큰 수가 있다면 int 버리고 ll을 쓰자! (이 코드가 통과된다면 int가 원인일 듯)

ll floor(ll A, ll B) {
    if(B < 0) {A *= -1; B *= -1;}
    return (A/B) - ((A<=0 && A%B != 0)? 1 : 0);
}

ll ceil(ll A, ll B) {
    if(B < 0) {A *= -1; B *= -1;}
    return (A/B) + ((A>=0 && A%B != 0)? 1 : 0);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    // 큰 수 설정
    ll max_v = 1e10;
    ll min_v = -1e10;

    while(N-- > 0) {
        ll A, B, C;
        cin >> A >> B >> C;

        if(A < 0) {
            min_v = max(ceil(C-B, A), min_v);
        } else {
            max_v = min(floor(C-B, A), max_v);
        }
    }

    if(max_v == 1e10|| min_v == -1e10)
        cout << "-1";
    else {
        ll count = max_v - min_v + 1;
        cout << ((count > 0)? count : 0);
    }

    return 0;
}