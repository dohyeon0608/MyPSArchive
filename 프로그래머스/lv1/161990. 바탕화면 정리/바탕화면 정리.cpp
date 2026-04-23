#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lux = wallpaper.size(), luy = wallpaper[0].length(), rdx = 0, rdy = 0;
    
    for(int x = 0; x < wallpaper.size(); x++) {
        for(int y = 0; y < wallpaper[0].length(); y++) {
            if(wallpaper[x][y] == '#') {
                if(x < lux) lux = x;
                if(x > rdx) rdx = x;
                if(y < luy) luy = y;
                if(y > rdy) rdy = y;
            }
        }
    }
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(++rdx);
    answer.push_back(++rdy);
    return answer;
}