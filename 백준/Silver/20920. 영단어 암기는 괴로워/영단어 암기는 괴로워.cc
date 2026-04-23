#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Word {
    string word;
    int count;
};

bool compare(Word a, Word b) {
    if(a.count != b.count) return a.count > b.count;
    else if (a.word.size() != b.word.size()) return a.word.size() > b.word.size();
    else return a.word < b.word;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    map<string, int> wordCount;
    vector<Word> wordList;
    string x;
    
    for(int i = 0; i < N; i++) {
        cin >> x;
        if(x.size() < M) continue;
        wordCount[x]++;
    }
    
    for(auto i : wordCount) {
        wordList.push_back(Word{ i.first, i.second});
    }
    
    sort(wordList.begin(), wordList.end(), compare);
    
    for(auto i : wordList) {
        cout << i.word << "\n";
    }
    
    return 0;
}