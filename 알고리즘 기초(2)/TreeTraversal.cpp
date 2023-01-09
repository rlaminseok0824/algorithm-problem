////https://www.acmicpc.net/problem/1991
//
//#include<iostream>
//#include<utility>
//using namespace std;
//
//typedef struct Node {   //typedef는 별칭 : 구조체 Node를 node라 쓰겠다
//	char value;
//	Node* left;
//	Node* right;
//}node;
//int N;
//
//void addTree(node* a, node* b,bool chk) {
//	if (!chk) {
//		a->left = b;
//	}
//	else {
//		a->right = b;
//	}
//}
//
//void preorderTraverse(node* a) {
//	cout << a->value;
//	if (a->left != NULL) preorderTraverse(a->left);
//
//	if (a->right != NULL) preorderTraverse(a->right);
//}
//
//void inorderTraverse(node* a) {
//	if (a->left != NULL) inorderTraverse(a->left);
//
//	cout << a->value;
//
//	if (a->right != NULL) inorderTraverse(a->right);
//}
//
//void postorderTraverse(node* a) {
//	if (a->left != NULL) postorderTraverse(a->left);
//	if (a->right != NULL) postorderTraverse(a->right);
//
//	cout << a->value;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	node tree[26];
//	char root, leftN, rightN;
//	for (int i = 0; i < N;i++) {
//		cin >> root >> leftN >> rightN;
//		tree[root - 'A'].value = root;
//		if (leftN != '.') addTree(&tree[root - 'A'], &tree[leftN - 'A'], false);
//		else {
//			tree[root - 'A'].left = NULL;
//		}
//		if (rightN != '.') addTree(&tree[root - 'A'], &tree[rightN - 'A'], true);
//		else 
//			tree[root - 'A'].right = NULL;
//	}
//	
//	preorderTraverse(&tree[0]);
//	cout << '\n';
//	inorderTraverse(&tree[0]);
//	cout << '\n';
//	postorderTraverse(&tree[0]);
//
//	return 0;
//}