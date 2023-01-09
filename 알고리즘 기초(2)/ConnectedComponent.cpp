////https://www.acmicpc.net/problem/11724
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int N, M;
//vector<int> graph[1001];
//int result = 0;
//int visited[1001];
//
//void bfs(int current) {
//	if (visited[current]) return;
//	result++;
//	queue<int> q;
//	q.push(current);
//	visited[current] = true;
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//		for (int i = 0; i < graph[node].size();i++) {
//			int next = graph[node][i];
//			if (visited[next]) continue;
//			visited[next] = true;
//			q.push(next);
//		}
//	}
//
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> M;
//	int nodeA, nodeB;
//	for (int i = 1; i <= M;i++) {
//		cin >> nodeA >> nodeB;
//		graph[nodeA].push_back(nodeB);
//		graph[nodeB].push_back(nodeA);
//	}
//
//	for (int i = 1;i <= N;i++) {
//		bfs(i);
//	}
//
//	cout << result;
//
//	return 0;
//}