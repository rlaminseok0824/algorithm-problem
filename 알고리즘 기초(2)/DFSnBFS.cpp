////https://www.acmicpc.net/problem/1260
//
//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm> 
//#include<memory.h> //memset 함수 사용
//using namespace std;
//
//int N, M, V;
//vector<vector<int>> graph;
//int visited[1001];
//
//void DFS(int current) {
//	visited[current] = true;
//	cout << current << " ";
//	for (int i = 0; i < graph[current].size();i++) {
//		int next = graph[current][i];
//		if (visited[next]) continue;
//		DFS(next);
//	}
//	return;
//}
//
//void BFS(int current) {
//	queue<int> q;
//	memset(visited, false,sizeof(visited));
//	visited[current] = true;
//	q.push(current);
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//		cout << node << " ";
//		for (int i = 0; i < graph[node].size();i++) {
//			int next = graph[node][i];
//			if (visited[next]) continue;
//			visited[next] = true;
//			q.push(next);
//		}
//	}
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> M >> V;
//
//	graph.resize(N + 1);
//
//	int nodeA,nodeB;
//	for (int i = 0; i < M;i++) {
//		cin >> nodeA >> nodeB;
//		graph[nodeB].push_back(nodeA);
//		graph[nodeA].push_back(nodeB);
//	}
//	for (int i = 1; i <= N;i++) {
//		sort(graph[i].begin(), graph[i].end());
//	}
//
//	DFS(V);
//	cout << '\n';
//	BFS(V);
//	return 0;
//}