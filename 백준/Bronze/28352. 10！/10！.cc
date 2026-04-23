#include <iostream>

using namespace std;

int main() {
   int N, result = 6;
   cin >> N;
   
   for(int i = 11; i <= N; i++) {
       result *= i;
   }
   
   cout << result;
    return 0;
}