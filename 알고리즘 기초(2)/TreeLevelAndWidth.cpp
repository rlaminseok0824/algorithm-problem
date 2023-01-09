////https://www.acmicpc.net/problem/2250
//
//#include<iostream>
//using namespace std;
//
//#define MAXSIZE 10001
//
//int N;
//typedef struct Node {
//	int value;
//	Node* left;
//	Node* right;
//	int colValue;
//}node;
//node tree[MAXSIZE];
//int numNode[MAXSIZE];
//int rootNode = 0;
//int width[2][MAXSIZE];
//int col = 1;
//
//void addTree(node* a, node* b, bool chk) {
//	if (!chk) {
//		a->left = b;
//	}
//	else {
//		a->right = b;
//	}
//}
//
//int cntNode(node* a) {
//	if (numNode[a->value]) return numNode[a->value];
//	
//	if (a->left == NULL && a->right == NULL) {
//		return numNode[a->value] = 1;
// 	}
//	else if (a->left == NULL) {
//		return numNode[a->value] = cntNode(a->right) + 1;
//	}
//	else if (a->right == NULL) {
//		return numNode[a->value] = cntNode(a->left) + 1;
//	}
//	else {
//		return numNode[a->value] = cntNode(a->left) + cntNode(a->right) + 1;
//	}
//}
//
//void inorderTraverse(node* a,int level) {
//	if (a->left != NULL) inorderTraverse(a->left,level + 1);
//	a->colValue = col;
//	col++;
//	if (a->right != NULL) inorderTraverse(a->right, level + 1);
//	
//	if (width[0][level] == 0)
//		width[0][level] = a->colValue;
//	else if (width[0][level] != 0 && width[0][level] > a->colValue) {
//		width[0][level] = a->colValue;
//	}
//	
//	if (width[1][level] < a->colValue) {
//		width[1][level] = a->colValue;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	int root, leftN, rightN;
//	for (int i = 0;i < N;i++) {
//		cin >> root >> leftN >> rightN;
//		tree[root].value = root;
//		if (leftN != -1) addTree(&tree[root], &tree[leftN], false);
//		else tree[root].left = NULL;
//		if (rightN != -1) addTree(&tree[root], &tree[rightN], true);
//		else tree[root].right = NULL;
//	}
//	
//	for (int i = 1; i <= N;i++) {
//		cntNode(&tree[i]);
//	}
//	
//	for (int i = 1;i <= N;i++) {
//		if (numNode[rootNode] < numNode[i]) {
//			rootNode = i;
//		}
//	}
//	inorderTraverse(&tree[rootNode], 1);
//
//	int maximum = 0,index = 1;
//	for (int i = 1;i <= MAXSIZE;i++) {
//		if (width[0][i] == 0) {
//			cout << index << " " << maximum;
//			break;
//		}
//		if (maximum < width[1][i] - width[0][i] + 1) {
//			maximum = width[1][i] - width[0][i] + 1;
//			index = i;
//		}
//	}
//	
//	return 0;
//}