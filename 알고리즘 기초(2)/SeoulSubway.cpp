////https://www.acmicpc.net/problem/16947
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<memory.h>
//#include<algorithm>
//using namespace std;
//
//int N;
//vector<int> subway[3001];
//int visited[3001];
//int cycle[3001];
//bool isCycle = false;
//
//void dfs(int cnt,int node,int start) {
//	if (cnt >= 3 && start == node) {
//		visited[start] = true;
//		copy(visited, visited + N + 1, cycle);
//		isCycle = true;
//		return;
//	}
//
//	for (int i = 0; i < subway[start].size();i++) {
//		if (visited[subway[start][i]]) continue;
//		visited[subway[start][i]] = true;
//		dfs(cnt + 1, node ,subway[start][i]);
//		visited[subway[start][i]] = false;
//	}
//	return;
//}
//
//void bfs(queue<int> q) {
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//		for (int i = 0; i < subway[node].size();i++) {
//			int next = subway[node][i];
//			if (cycle[next] || visited[next]) continue;
//			q.push(next);
//			visited[next] = visited[node] + 1;
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	int nodeA, nodeB;
//	for (int i = 0; i < N; i++) {
//		cin >> nodeA >> nodeB;
//		subway[nodeA].push_back(nodeB);
//		subway[nodeB].push_back(nodeA);
//	}
//	for (int i = 1; i <= N;i++) {
//		dfs(0, i, i);
//		if (isCycle) break;
//	}
//	queue<int> q;
//	for (int i = 1; i <= N;i++) {
//		if (cycle[i]) {
//			q.push(i);
//		}
//	}
//	bfs(q);
//	for (int i = 1; i <= N;i++) {
//		cout << visited[i] << " ";
//	}
//	return 0;
//}