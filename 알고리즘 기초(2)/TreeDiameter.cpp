////https://www.acmicpc.net/problem/1167
//
//#include<iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//
//#define MAXSIZE 100001
//
//int V;
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
//	cin >> V;
//	for (int i = 0; i < V;i++) {
//		cin >> from;
//		while (true) {
//			cin >> to;
//			if (to == -1) break;
//			cin >> length;
//			tree[from].push_back(pair<int, int>(to, length));
//		}
//	}
//	/*for (int i = 1; i <= V;i++) {
//		cout << i << " : ";
//		for (int j = 0; j < tree[i].size();j++) {
//			cout << tree[i][j].first << " ";
//		}
//		cout << endl;
//	}*/
//	dfs(1,0);
//	visited[1] = false;
//	dfs(maxNode, 0);
//
//	cout << result;
//	return 0;
//}