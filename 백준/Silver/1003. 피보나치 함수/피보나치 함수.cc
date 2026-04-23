#include <iostream>
#include <map>

using namespace std;

struct Memo {
    int zero;
    int one;
};

map<int, Memo> fibonacciMemo;

Memo fibonacci(int n) {
    bool found = fibonacciMemo.find(n) != fibonacciMemo.end();
    if(found) {
        return fibonacciMemo[n];
    } else if(n == 0) {
        fibonacciMemo[0] = Memo { 1, 0 };
        return fibonacciMemo[0];
    } else if(n == 1) {
        fibonacciMemo[1] = Memo { 0, 1 };
        return fibonacciMemo[1];
    } else {
        Memo first = fibonacci(n-1);
        Memo second = fibonacci(n-2);
        fibonacciMemo[n] = Memo{ first.zero + second.zero, first.one + second.one };
        return fibonacciMemo[n];
    }
}

int main() {
    int T;
    cin >> T;
    
    int x;
    for(int i = 0; i < T; i++) {
        cin >> x;
        
        Memo result = fibonacci(x);
        cout << result.zero << " " << result.one << "\n";
    }

    return 0;
}