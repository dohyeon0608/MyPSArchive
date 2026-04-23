#include <iostream>

using namespace std;

int a = 0, b = 0;
int F[41];

int fib(int n) {
    if(n==1 || n==2){ a++; return 1;}
    return fib(n-1) + fib(n-2);
}

int fibonacci(int n) {
    F[1]=F[2]=1;
    for(int i = 3; i <= n; i++) {
        b++;
        F[i] = F[i-1] + F[i-2];
    }
    return F[n];
}

int main() {
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    
    cout << a << " " << b << "\n";

    return 0;
}