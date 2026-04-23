#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(n > 0) {
        answer++;
        while(true) {
            bool isthree = answer % 3 == 0;
            int temp = answer;
            while(temp > 0) {
                if(temp % 10 == 3) {
                    isthree = true;
                    break;
                }
                temp /= 10;
            }
            if(isthree) answer++;
            else break;
        }
        n--;
    }
    return answer;
}