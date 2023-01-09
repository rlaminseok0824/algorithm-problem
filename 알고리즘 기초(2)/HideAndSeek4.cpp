////https://www.acmicpc.net/problem/1697
//
//#include<iostream>
//#include<queue>
//#include<stack>
//using namespace std;
//
//int n, k;
//int visited[100001];
//int from[100001];
//int index = k;
//stack<int> s;
//
//void bfs() {
//	queue<int> q;
//	visited[n] = 1;
//	from[n] = -1;
//	q.push(n);
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
//			from[next] = node;
//			visited[next] = visited[node] + 1;
//			if (next == k) {
//				cout << visited[next] - 1 << '\n';
//				index = k;
//				while (from[index] != -1) {
//					s.push(index);
//					index = from[index];
//				}
//				s.push(index);
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
//	cin >> n >> k;
//	if (n == k) {
//		cout << 0 << "\n";
//		cout << n;
//	}
//	else {
//		bfs();
//		while (!s.empty()) {
//			cout << s.top() << " ";
//			s.pop();
//		}
//	}
//	return 0;
//}