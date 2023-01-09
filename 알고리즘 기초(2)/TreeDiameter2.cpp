//////https://www.acmicpc.net/problem/1967
////
////#include<iostream>
////using namespace std;
////
////int n;
////typedef struct Node {
////	int value;
////	pair<Node*, int> left;
////	pair<Node*, int> right;
////}node;
////
////node tree[10001];
////int result = 0;
////int maxNode = 0;
////
////void addTree(node* a, node* b, int weight) {
////	if (a->left.first == NULL) {
////		a->left.first = b;
////		a->left.second = weight;
////	}
////	else {
////		a->right.first = b;
////		a->right.second = weight;
////	}
////}
////
////void print(node* a) {
////	cout << a->left.second << endl;
////	cout << a->right.second << endl;
////}
////
////void dfs(node* temp, int weight) {
////	if (temp->left.first != NULL) {
////		if (temp->left.second + weight > result) {
////			result = temp->left.second + weight;
////			maxNode = temp->left.first->value;
////		}
////		dfs(temp->left.first, temp->left.second + weight);
////	}
////	if (temp->right.first != NULL) {
////		if (temp->left.second + weight > result) {
////			result = temp->right.second + weight;
////			maxNode = temp->right.first->value;
////		}
////		dfs(temp->right.first, temp->right.second + weight);
////	}
////}
////
////int main() {
////	cin >> n;
////	int from, to, weight;
////	for (int i = 0; i < n - 1; i++) {
////		cin >> from >> to >> weight;
////		addTree(&tree[from],&tree[to],weight);
////	}
////
////	for (int i = 1; i <= n;i++) {
////		tree[i].value = i;
////	}
////	
////	dfs(&tree[1], 0);
////	dfs(&tree[maxNode], 0);
////
////	cout << result;
////	return 0;
////}
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//
//#define MAXSIZE 10001
//
//int n;
//int from, to, length;
//vector<pair<int, int>> tree[MAXSIZE];
//int visited[MAXSIZE];
//int result = 0;
//int maxNode = 0;
//
//void dfs(int node,int meter) {
//	visited[node] = true;
//	for (int i = 0; i < tree[node].size();i++) {
//		int next = tree[node][i].first;
//		int curMeter = tree[node][i].second + meter;
//		if (visited[next]) continue;
//		if (curMeter > result) {
//			maxNode = next;
//			result = curMeter;
//		}
//		dfs(next, curMeter);
//		visited[next] = false;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n - 1;i++) {
//		cin >> from >> to >> length;
//		tree[from].push_back(pair<int,int>(to, length));
//		tree[to].push_back(pair<int, int>(from, length));
//	}
//	
//	dfs(1,0);
//	visited[1] = false;
//	dfs(maxNode, 0);
//
//	cout << result;
//	return 0;
//}