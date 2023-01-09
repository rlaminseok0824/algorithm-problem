////https://www.acmicpc.net/problem/1697
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int N, K;
//int visited[100001];
//
//void bfs() {
//	queue<int> q;
//	visited[N] = 1;
//	q.push(N);
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//
//		for (int i = -1;i <= 1;i++) {
//			int next = node + i;
//			if (i == 0) next = node * 2;
//
//			if (next < 0 || next > 100000) continue;
//			if (visited[next]) continue;
//
//			visited[next] = visited[node] + 1;
//			if (next == K) {
//				cout << visited[next] - 1;
//				return;
//			}
//			q.push(next);
//		}
//	}
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> K;
//	if (N == K)
//		cout << 0;
//	else
//		bfs();
//	return 0;
//}