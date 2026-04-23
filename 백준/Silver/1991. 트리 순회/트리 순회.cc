#include <bits/stdc++.h>

using namespace std;

struct Node {
	char value;
	Node* left;
	Node* right;
};

Node *find_node(Node *tree, char &value) {
	if(tree->value == value) {
		return tree;
	}

	Node* result = NULL;

	if(tree->left != NULL) {
		result = find_node(tree->left, value);
		if(result != NULL) return result;
	}
	if(tree->right != NULL) {
		result = find_node(tree->right, value);
		if(result != NULL) return result;
	}
	return NULL;
}

void insert_childs(Node *tree, char root, char left, char right) {
	Node* root_node = find_node(tree, root);
	if(root_node == NULL) return;

	if(left != '.') {
		root_node->left = new Node{left, NULL, NULL};
	}

	if(right != '.') {
		root_node->right = new Node{right, NULL, NULL};
	}
}

void print_preorder(Node *tree) {
	cout << tree->value;
	if(tree->left != NULL) print_preorder(tree->left);
	if(tree->right != NULL) print_preorder(tree->right);
}

void print_inorder(Node *tree) {
	if(tree->left != NULL) print_inorder(tree->left);
	cout << tree->value;
	if(tree->right != NULL) print_inorder(tree->right);
}

void print_postorder(Node *tree) {
	if(tree->left != NULL) print_postorder(tree->left);
	if(tree->right != NULL) print_postorder(tree->right);
	cout << tree->value;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	Node tree = {'A', NULL, NULL};

	int N;
	cin >> N;

	char a, b, c;

	for(int i = 0; i < N; i++) {
		cin >> a >> b >> c;
		insert_childs(&tree, a, b, c);
	}

	print_preorder(&tree);
	cout << "\n";
	print_inorder(&tree);
	cout << "\n";
	print_postorder(&tree);
	cout << "\n";

    return 0;
}