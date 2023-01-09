////https://www.acmicpc.net/problem/13549
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//#define MAXSIZE 100001
//
//int N, K;
//int visited[MAXSIZE];
//
//void bfs() {
//	queue<int> q;
//	q.push(N);
//	visited[N] = 1;
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//
//		if (node * 2 < MAXSIZE && !visited[node * 2]) {
//			q.push(node * 2);
//			visited[node * 2] = visited[node];
//			if (node * 2 == K) {
//				cout << visited[node * 2] - 1;
//				return;
//			}
//		}
//		for (int i = -1;i <= 1;i+=2) {
//			int next = node + i;
//
//			if (next < 0 || next > 100000) continue;
//			if (visited[next]) continue;
//
//			visited[next] = visited[node] + 1;
//
//			if (next == K) {
//				cout << visited[next] - 1;
//				return;
//			}
//			q.push(next);
//		}
//	}
//}
//
//int main() {
//	cin >> N >> K;
//	if (N == K)
//		cout << 0;
//	else
//		bfs();
//	return 0;
//}