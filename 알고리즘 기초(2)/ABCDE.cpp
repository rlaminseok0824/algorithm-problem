////https://www.acmicpc.net/problem/13023
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int N, M;
//vector<vector<int>> graph;
//int visited[20001];
//bool ans = false;
//
//void solve(int depth,int current) {
//	visited[current] = true;
//
//	if (depth == 4) {
//		ans = true;
//		return;
//	}
//
//	for (int i = 0;i < graph[current].size();i++) {
//		int next = graph[current][i];
//		if (visited[next]) continue;
//		solve(depth + 1, next);
//	}
//
//	visited[current] = false;
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> M;
//	int left, right;
//
//	graph.resize(N);
//
//	for (int i = 0;i < M;i++) {
//		cin >> left >> right;
//		graph[left].push_back(right);
//		graph[right].push_back(left);
//	}
//	
//	for (int i = 0; i < N;i++) {
//		solve(0, i);
//		if (ans) {
//			cout << 1;
//			return 0;
//		}
//	}
//	cout << 0;
//	return 0;
//}