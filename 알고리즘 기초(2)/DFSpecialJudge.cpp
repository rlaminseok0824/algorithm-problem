////https://www.acmicpc.net/problem/16964
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//#define MAXSIZE 100001
//
//int N;
//vector<int> graph[MAXSIZE];
//int dfs_order[MAXSIZE];
//int visited[MAXSIZE];
//queue<int> check;
//
//bool comp(int a, int b) {
//	return dfs_order[a] < dfs_order[b];
//}
//
//void dfs(int cdx) {
//	for (int i = 0; i < graph[cdx].size();i++) {
//		if (visited[graph[cdx][i]]) continue;
//		visited[graph[cdx][i]] = true;
//		if (graph[cdx][i] == check.front()) {
//			check.pop();
//			dfs(graph[cdx][i]);
//		}
//	}
//	return;
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
//		graph[nodeA].push_back(nodeB);
//		graph[nodeB].push_back(nodeA);
//	}
//
//	int temp;
//	for (int i = 1;i <= N;i++) {
//		cin >> temp;
//		dfs_order[temp] = i;
//		check.push(temp);
//	}
//
//	for (int i = 1;i <= N;i++) {
//		sort(graph[i].begin(), graph[i].end(), comp);
//	}
//
//	if (check.front() != 1) {
//		cout << "0\n";
//		return 0;
//	}
//	check.pop();
//	visited[1] = true;
//	dfs(1);
//
//	if (check.empty()) cout << "1\n";
//	else cout << "0\n";
//
//	return 0;
//}