#include <iostream>
#include <vector>

using namespace std;

int result[100001] = { 1, 1, 0 };

class Tree {
public:
    vector<vector<int>> nodes;

    void addNode(int t, int k) {
        nodes[t].push_back(k);
    }

    vector<int> getNodes(int t) {
        return nodes[t];
    }

    Tree(int number) : nodes(number) {
    }

};

void dfs(Tree& t, int x) {
    for (auto n : t.getNodes(x)) {
        if (result[n] == 0) {
            result[n] = x;
            dfs(t, n);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    Tree tree(N+1);
    
    int a, b;
    for (int i = 0; i < N-1; i++) {
        cin >> a >> b;
        tree.addNode(a, b);
        tree.addNode(b, a);
    }

    // dfs
    dfs(tree, 1);

    for (int i = 2; i <= N; i++) {
        cout << result[i] << "\n";
    }


    return 0;
}