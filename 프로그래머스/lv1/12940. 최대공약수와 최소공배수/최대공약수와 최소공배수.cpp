#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    int r = a % b;
    if(r == 0) return b;
    return GCD(b, r);
}

vector<int> solution(int n, int m) {
    int gcd;
    if(n>m) gcd = GCD(n, m);
    else gcd = GCD(m, n);
    
    vector<int> answer = {gcd, n*m/gcd};
    return answer;
}