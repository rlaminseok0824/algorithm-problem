////https://www.acmicpc.net/problem/11725
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//#define MAXSIZE 100001
//
//int N;
//vector<int> node[MAXSIZE];
//int visited[MAXSIZE];
//int result[MAXSIZE];
//
//void bfs() {
//	queue<int> q;
//	q.push(1);
//	visited[1] = true;
//	while (!q.empty()) {
//		int curr = q.front();
//		q.pop();
//		for (int i = 0; i < node[curr].size();i++) {
//			int next = node[curr][i];
//			if (visited[next]) continue;
//			visited[next] = true;
//			result[next] = curr;
//			q.push(next);
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
//	for (int i = 0; i < N - 1;i++) {
//		cin >> nodeA >> nodeB;
//		node[nodeA].push_back(nodeB);
//		node[nodeB].push_back(nodeA);
//	}
//
//	bfs();
//
//	for (int i = 2; i <= N;i++) {
//		cout << result[i] << '\n';
//	}
//	return 0;
//}